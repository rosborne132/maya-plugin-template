# Maya Plug-in Template
This is a template repo for creating a Maya command plugin.

## Setup

### Install devkit
In order to build plugins for Maya, you need to install the devkit for the version of Maya you are using. To install the devkit, locate your OS and version [here](https://www.autodesk.com/developer-network/platform-technologies/maya).

### Setup devkit
Once you install the devkit, you need to set it up for your OS. You can find instructions [here](https://help.autodesk.com/view/MAYAUL/2023/ENU/?guid=Maya_SDK_Setting_up_your_build_html).

## Project scripts
```bash
// Removes build directory
make clean

// Generates makefile + build directory
make generate

// Runs make generate and builds project
make build

// Removes build directory and builds a new project
make full-build
```

## Generating makefile
To generate the CMake file run one of the following commands.

Generate a Visual Studio project
```bash
cmake -H. -Bbuild -G "Visual Studio 16 2019 Win64"
```

Generates an xcode project
```bash
cmake -H. -Bbuild -G Xcode
```

Generates a makefile
```bash
cmake -H. -Bbuild -G "Unix Makefiles"
```

## Building the project
Once the makefile has been created you just need to run the following command to build the plug-in.
```bash
cmake --build build
```

## Launching the Maya Prompt (MacOS)
The MacOS version of Maya doesn't have an output window like Windows. To get around this, we will launch Maya from the terminal. To do this, run the following command:
```bash
/Applications/Autodesk/maya{version}/Maya.app/Contents/bin/maya -prompt
```

