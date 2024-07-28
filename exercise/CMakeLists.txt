# set the minimum required version of cmake
cmake_minimum_required(VERSION 3.16..3.24)

# set the project, version, description, and languages
project(has-pair
    VERSION 0.0.1
    DESCRIPTION "Check if a type has a pair member"
    LANGUAGES CXX
)

# enable testing
include(CTest)

# add googletest repo as a subdirectory
add_subdirectory(${CMAKE_SOURCE_DIR}/../exercise/googletest ${CMAKE_BINARY_DIR}/googletest)

# add the has-pair subdirectory
add_subdirectory(hasPair)