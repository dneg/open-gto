//
// Copyright (C) 2003 Tweak Films
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//

#ifndef _GtoInObject_h_
#define _GtoInObject_h_
#include <maya/MObject.h>
#include <maya/MMatrix.h>
#include <string>
#include <vector>
#include <map>
#include <sys/types.h>
#include <Gto/Protocols.h>
#include <Gto/Reader.h>

namespace GtoIOPlugin {

typedef Gto::Reader::Request Request;
typedef Gto::Reader::PropertyInfo PropertyInfo;
typedef Gto::Reader::StringTable StringTable;

class Object
{
public:
    Object( const std::string &name, 
            const std::string &protocol,
            const unsigned int protocolVersion );
    virtual ~Object();

    const std::string &name() const { return m_name; }
    const std::string &parent() const { return m_parent; }
    const std::string &protocol() const { return m_protocol; }
    const MObject &mayaObject() const { return m_mayaObject; }
    const MObject &mayaParentObject() const { return m_mayaParentObject; }
    bool wasRenamed() const { return m_wasRenamed; }

    void mayaObject( MObject &o )  { m_mayaObject = o; }
    void mayaParentObject( MObject &o ) { m_mayaParentObject = o; }

    //**************************************************************************
    // READER STUFF
    enum
    {
        OBJECT_C = 1,
        CHANNELS_C,
        NEXT_C
    };

    enum
    {
        OBJECT_GLOBALMATRIX_P = 1,
        OBJECT_PARENT_P,
        NEXT_P
    };
    
    struct TextureChannel
    {
        std::string mappingType;
        std::string texFilename;
    };
    typedef std::map<std::string, TextureChannel> TexChannelMap;
        
    virtual Request component( const std::string &name ) const;
    
    virtual Request property( const std::string &name,
                              void *componentData ) const;

    virtual void *data( const PropertyInfo &pinfo, 
                        size_t bytes,
                        void *componentData,
                        void *propertyData );

    virtual void dataRead( const PropertyInfo &pinfo,
                           void *componentData,
                           void *propertyData,
                           const StringTable &strings );

    // Override to declare this as a new object to Maya
    virtual void declareMaya() {};

    // Override to modify an existing Maya object with keyframe data
    virtual void declareMayaDiff() {};
    
    void computeLocalTransform( const Object *parent );
    const MMatrix &globalTransform() const { return m_globalTransform; }

    static void filePrefix( std::string filePrefix )
                                     { m_filePrefix = filePrefix; }
    
protected:
    void setTransform( const float *transform );
    void setName();
    void addToDefaultSG();
    void addTextureChannelAttributes();
    
protected:
    std::string m_name;
    std::string m_protocol;
    unsigned int m_protocolVersion;
    std::string m_parent;

    MMatrix m_globalTransform;
    MMatrix m_localTransform;

    MObject m_mayaObject;
    MObject m_mayaParentObject;
    bool m_wasRenamed;

    static std::string m_filePrefix;
    
    std::vector<float> m_tmpFloatData;
    int m_tmpIntData;
    
    int m_textureAssignmentIds[2];
    TexChannelMap m_textureMappings;
};

} // End namespace GtoIOPlugin

#endif
