cmake_minimum_required(VERSION 3.13)

set(PROJECT_NAME maya-plugin-template)
project(${PROJECT_NAME})

include($ENV{DEVKIT_LOCATION}/cmake/pluginEntry.cmake)
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

set(SOURCE_FILES ${SOURCES})
set(LIBRARIES
    OpenMaya Foundation
)

build_plugin()
