cmake_minimum_required(VERSION 3.6)
PROJECT(osg_prototype)

MESSAGE("CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}")

#CONAN
execute_process(COMMAND ${CMAKE_SOURCE_DIR}/install.bat ${CMAKE_SOURCE_DIR})
if(EXISTS ${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
endif()

# C++ 11
SET(CMAKE_CXX_STANDARD 11)

#FIND QT
find_package(Qt5 REQUIRED COMPONENTS Core Gui OpenGL)
#find_package(OpenSceneGraph REQUIRED COMPONENTS osgDB osgGA osgUtil osgViewer)

# Output Directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Source Code
add_subdirectory(src)
