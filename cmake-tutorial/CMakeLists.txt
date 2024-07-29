# minimum required version of CMake
cmake_minimum_required(VERSION 3.16..3.24)

# project name, version, description, and programming language
project(sample VERSION 0.0.1 DESCRIPTION "Sample Project" LANGUAGES CXX)

# set to release if not set in the command line
# release is for performance, debug is for debugging, more available
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

# create a interface library target cxx_setup
# apply common compiler settings
add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup INTERFACE -Wall -Wpedantic -Wextra)
target_compile_features(cxx_setup INTERFACE cxx_std_17)
target_include_directories(cxx_setup INTERFACE ${PROJECT_SOURCE_DIR})

# add subdirectories to the build
add_subdirectory(${PROJECT_NAME})
add_subdirectory(executables)