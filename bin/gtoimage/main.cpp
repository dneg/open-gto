//
//  Copyright (c) 2003 Tweak Films
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License as
//  published by the Free Software Foundation; either version 2 of the
//  License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
//  02111-1307, USA.
//
#include <Gto/RawData.h>
#include <Gto/Protocols.h>
#include <WFObj/Reader.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <tiffio.h>

using namespace Gto;
using namespace std;

//----------------------------------------------------------------------

string 
basename(string path)
{
    size_t lastSlash = path.rfind( "/" );

    if (lastSlash == path.npos)
    {
        return path;
    }

    return path.substr( lastSlash + 1, path.size() );
}


string
extension(const std::string& path)
{
    string filename(basename(path));

    if (filename.find( "." ) == filename.npos)
    {
        return string("");
    }
    else
    {
        return filename.substr( filename.rfind(".") + 1, filename.size() );
    }
}

string 
prefix( string path )
{
    string filename( basename( path ) );
    if( filename.find( "." ) == filename.npos )
    {
        return filename;
    }
    return filename.substr( 0, filename.find( "." ) );
}


//----------------------------------------------------------------------

struct Image
{
    int w;
    int h;
    short bbs;
    int channels;
    int type;
    size_t size;
    size_t pixelSize;

    float* floatPixel(int x, int y) 
    { 
        return floatData + y * w * channels + x * channels; 
    }

    short* shortPixel(int x, int y) 
    { 
        return shortData + y * w * channels + x * channels; 
    }

    char* charPixel(int x, int y)
    {
        return charData + y * w * channels + x * channels; 
    }

    union
    {
        float* floatData;
        short* shortData;
        char*  charData;
        void*  voidData;
    };
};


Image*
readTIFF(const std::string& imgFileName)
{
    Image* image = new Image;

    //
    // Suppress annoying messages about unknown tags, etc...
    //

    TIFFSetErrorHandler(0);
    TIFFSetWarningHandler(0);

    TIFF* tif = TIFFOpen(imgFileName.c_str(), "r");

    if (!tif) return 0;
    
    unsigned short *sampleinfo;
    unsigned short extrasamples;
    unsigned short bbs;

    TIFFGetField( tif, TIFFTAG_IMAGEWIDTH, &image->w);
    TIFFGetField( tif, TIFFTAG_IMAGELENGTH, &image->h);
    TIFFGetField( tif, TIFFTAG_BITSPERSAMPLE, &image->bbs );

    TIFFGetFieldDefaulted( tif, TIFFTAG_EXTRASAMPLES, 
                           &extrasamples, &sampleinfo );
	
    image->channels = extrasamples ? 4 : 3;
    
    switch (image->bbs)
    {
      case 32:
          image->floatData = new float[image->w * image->h * image->channels];
          image->type = Float;

          for (int y = 0; y < image->h; ++y)
          {
              TIFFReadScanline(tif, image->floatPixel(0, image->h - y - 1), y);
          }
          break;

      case 16:
          image->shortData = new short[image->w * image->h * image->channels];
          image->type = Short;

          for (int y = 0; y < image->h; ++y )
          {
              TIFFReadScanline(tif, image->shortPixel(0, image->h - y - 1), y);
          }
          break;

      case 8:
          image->charData = new char[image->w * image->h * image->channels];
          image->type = Byte;

          for (int y = 0; y < image->h; ++y )
          {
              TIFFReadScanline( tif, image->charPixel(0, image->h - y - 1), y );
          }
          break;
    }
    
    TIFFClose(tif);
    return image;
}

//----------------------------------------------------------------------

Object*
makeImageObject(Image* image, const char* inFile)
{
    Object* o = new Object(prefix(inFile), GTO_PROTOCOL_IMAGE, 1);

    Components& c = o->components;
    c.push_back(new Component(GTO_COMPONENT_IMAGE, 0));

    Property* p;

    p = new Property("originalFile", String, 1, 1, true);
    p->stringData[0] = inFile;
    c[0]->properties.push_back(p);

    p = new Property("originalEncoding", String, 1, 1, true);
    p->stringData[0] = "TIFF";
    c[0]->properties.push_back(p);

    p = new Property(GTO_PROPERTY_TYPE, String, 1, 1, true);
    p->stringData[0] = image->channels == 3 ? "RGB" : "RGBA";
    c[0]->properties.push_back(p);

    p = new Property(GTO_PROPERTY_SIZE, Int, 2, 1, true);
    p->int32Data[0] = image->w;
    p->int32Data[1] = image->h;
    c[0]->properties.push_back(p);

    p = new Property(GTO_PROPERTY_PIXELS, (Gto::DataType)image->type, 
                     image->w * image->h, image->channels, false);
    p->voidData = image->voidData;
    c[0]->properties.push_back(p);

    return o;
}


//----------------------------------------------------------------------

void
usage()
{
    cout << "gtoimage [OPTIONS] INFILE OUTFILE" << endl
         << endl
         << "INFILE     a tiff file" << endl
         << "OUTFILE    a gto file" << endl
         << endl;
    
    exit(-1);
}

//----------------------------------------------------------------------

int main(int argc, char *argv[])
{
    char* inFile   = 0;
    char* outFile  = 0;
    char* outObj   = 0;
    int   replace  = 0;

    for (int i=1; i < argc; i++)
    {
        if (*argv[i] == '-')
        {
            usage();
        }
        else
        {
            if (!inFile) inFile = argv[i];
            else if (!outFile) outFile = argv[i];
            else usage();
        }
    }

    //
    //  Check for bad options
    //

    if (!inFile || !outFile)
    {
	cerr << "ERROR: no infile or outfile specified.\n" << endl;
        usage();
    }

    string iext = extension(inFile);
    string oext = extension(outFile);

    if (iext == oext)
    {
        cerr << "ERROR: input and output extensions are the same" << endl;
        usage();
    }

    //
    //  In
    //

    RawDataBase* db = new RawDataBase;
    Image* i = 0;
    cout << "INFO: reading " << inFile << endl;

    if (iext == "tif" || iext == "tiff" || iext == "TIF" || iext == "TIFF")
    {
        i = readTIFF(inFile);
    }
    else
    {
        cerr << "ERROR: Unknown image extension: " << iext << endl;
        exit(-1);
    }

    db->objects.push_back(makeImageObject(i, inFile));

    //
    //  Out
    //

    cout << "INFO: writing " << outFile << endl;

    if (oext == "gto")
    {
        RawDataBaseWriter writer;

        if (!writer.write(outFile, *db))
        {
            cerr << "ERRROR: writing file " << outFile << endl;
            exit(-1);
        }
    }

    return 0;
}
