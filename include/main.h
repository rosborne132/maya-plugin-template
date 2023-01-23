#ifndef MAIN_H
#define MAIN_H

#include <maya/MPxCommand.h>

class mayaPluginTemplate : public MPxCommand {
    public:
        MStatus doIt();
        static void* creator();
};

#endif