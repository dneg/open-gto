//******************************************************************************
// Copyright (c) 2001-2003 Tweak Inc. All rights reserved.
//******************************************************************************

#include "gtoHeader.h"

namespace PyGto {
using namespace std;

// *****************************************************************************
//          ObjectInfo Class
// *****************************************************************************

// *****************************************************************************
PyObject *ObjectInfo_init( PyObject *_self, PyObject *args )
{
    Py_INCREF( Py_None );
    return Py_None;
}


// *****************************************************************************
PyObject *newObjectInfo( const Gto::Reader::ObjectInfo &oi )
{
    PyObject *module = PyImport_AddModule( "gto" );
    PyObject *moduleDict = PyModule_GetDict( module );
            
    PyObject *classObj = PyDict_GetItemString( moduleDict, "ObjectInfo" );

    PyObject *args = Py_BuildValue( "()" ); // Empty tuple
    PyObject *objInfo = PyInstance_New( classObj, args, NULL );
    
    PyObject_SetAttr( objInfo, 
                      PyString_FromString( "name" ),
                      PyInt_FromLong( oi.name ) );

    PyObject_SetAttr( objInfo, 
                      PyString_FromString( "protocolName" ),
                      PyInt_FromLong( oi.protocolName ) );

    PyObject_SetAttr( objInfo, 
                      PyString_FromString( "protocolVersion" ),
                      PyInt_FromLong( oi.protocolVersion ) );

    PyObject_SetAttr( objInfo, 
                      PyString_FromString( "numComponents" ),
                      PyInt_FromLong( oi.numComponents ) );

    Py_INCREF( objInfo );
    return objInfo;
}


// *****************************************************************************
//          ComponentInfo Class
// *****************************************************************************

// *****************************************************************************
PyObject *ComponentInfo_init( PyObject *_self, PyObject *args )
{
    Py_INCREF( Py_None );
    return Py_None;
}

// *****************************************************************************
PyObject *newComponentInfo( const Gto::Reader::ComponentInfo &ci )
{
    PyObject *module = PyImport_AddModule( "gto" );
    PyObject *moduleDict = PyModule_GetDict( module );
            
    PyObject *classObj = PyDict_GetItemString( moduleDict, "ComponentInfo" );

    PyObject *args = Py_BuildValue( "()" ); // Empty tuple
    PyObject *compInfo = PyInstance_New( classObj, args, NULL );
    
    PyObject_SetAttr( compInfo, 
                      PyString_FromString( "name" ),
                      PyInt_FromLong( ci.name ) );

    PyObject_SetAttr( compInfo, 
                      PyString_FromString( "numProperties" ),
                      PyInt_FromLong( ci.numProperties ) );
    
    PyObject_SetAttr( compInfo, 
                      PyString_FromString( "flags" ),
                      PyInt_FromLong( ci.flags ) );
    
    PyObject_SetAttr( compInfo, 
                      PyString_FromString( "object" ),
                      newObjectInfo( (*ci.object) ) );


    Py_INCREF( compInfo );
    return compInfo;
}


// *****************************************************************************
//          PropertyInfo Class
// *****************************************************************************

// *****************************************************************************
PyObject *PropertyInfo_init( PyObject *_self, PyObject *args )
{
    Py_INCREF( Py_None );
    return Py_None;
}

// *****************************************************************************
PyObject *newPropertyInfo( const Gto::Reader::PropertyInfo &pi )
{
    PyObject *module = PyImport_AddModule( "gto" );
    PyObject *moduleDict = PyModule_GetDict( module );
            
    PyObject *classObj = PyDict_GetItemString( moduleDict, "PropertyInfo" );

    PyObject *args = Py_BuildValue( "()" ); // Empty tuple
    PyObject *propInfo = PyInstance_New( classObj, args, NULL );
    
    PyObject_SetAttr( propInfo, 
                      PyString_FromString( "name" ),
                      PyInt_FromLong( pi.name ) );

    PyObject_SetAttr( propInfo, 
                      PyString_FromString( "size" ),
                      PyInt_FromLong( pi.size ) );
    
    PyObject_SetAttr( propInfo, 
                      PyString_FromString( "type" ),
                      PyInt_FromLong( pi.type ) );
    
    PyObject_SetAttr( propInfo, 
                      PyString_FromString( "width" ),
                      PyInt_FromLong( pi.width ) );

    PyObject_SetAttr( propInfo, 
                      PyString_FromString( "component" ),
                      newComponentInfo( (*pi.component) ) );


    Py_INCREF( propInfo );
    return propInfo;
}


}  //  End namespace PyGto
