# Maya Plug-in Template
This is a template repo for creating a Maya command plugin.

# Setup



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
/Applications/Autodesk/maya2023/Maya.app/Contents/bin/maya -prompt
```

