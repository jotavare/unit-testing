# set the minimum required version of cmake
cmake_minimum_required(VERSION 3.16..3.24)

# set the project, version, description, and languages
project(try_googletest
    VERSION 0.0.1
    DESCRIPTION "Trying googletest"
    LANGUAGES CXX
)

# update the submodules
include(cmake/UpdateSubmodules.cmake)

# enable testing
include(CTest)

# add googletest repo as a subdirectory
add_subdirectory(googletest)
add_subdirectory(hasPair)