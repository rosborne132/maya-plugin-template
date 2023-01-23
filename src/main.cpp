#include <stdio.h>
#include <maya/MString.h>
#include <maya/MFnPlugin.h>
#include <maya/MIOStream.h>

#include "main.h"

MStatus mayaPluginTemplate::doIt() {
    cout << "Plugin initialized" << endl;
    return MS::kSuccess;
}

void* mayaPluginTemplate::creator() {
    return new mayaPluginTemplate;
}

MStatus initializePlugin( MObject obj ) {
    MFnPlugin plugin( obj, "Autodesk", "1.0", "Any" );
    plugin.registerCommand( "mayaPluginTemplate", mayaPluginTemplate::creator );
    return MS::kSuccess;
}

MStatus uninitializePlugin( MObject obj ) {
    MFnPlugin plugin( obj );
    plugin.deregisterCommand( "mayaPluginTemplate" );
    return MS::kSuccess;
}
