# set the minimum required version of CMake
cmake_minimum_required(VERSION 3.16...3.24)

# set the project, version, description, and languages
project(hasPair VERSION 0.0.1 DESCRIPTION "hasPair" LANGUAGES CXX)

# set c++ standard to c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# enable compiler warnings
add_compile_options(-Wall -Wextra -Werror -pedantic)

# create an interface library target cxx_setup
add_library(cxx_setup INTERFACE)
target_include_directories(cxx_setup INTERFACE ${PROJECT_SOURCE_DIR})

# update the submodule script to auto update
include(cmake/UpdateSubmodules.cmake)

# enable testing
include(CTest)

# add googletest repo and haspair folder as a subdirectory
add_subdirectory(googletest)
add_subdirectory(hasPair)
