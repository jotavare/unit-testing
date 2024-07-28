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
target_compile_options(cxx_setup INTERFACE -Wall -Wextra -Werror -pedantic)
target_compile_features(cxx_setup INTERFACE cxx_std_17)
target_include_directories(cxx_setup INTERFACE ${PROJECT_SOURCE_DIR})

# update the submodule script to auto update
include(cmake/UpdateSubmodules.cmake)

# enable testing
include(CTest)

# add googletest repo and haspair folder as a subdirectory
add_subdirectory(googletest)
add_subdirectory(hasPair)

# define options for each test in ccmake
option(ENABLE_TEST_PAIR_EXISTS "Enable PairExists test" OFF)
option(ENABLE_TEST_PAIR_DOES_NOT_EXIST "Enable PairDoesNotExist test" OFF)
option(ENABLE_TEST_NEGATIVE_NUMBERS "Enable NegativeNumbers test" OFF)
option(ENABLE_TEST_EMPTY_VECTOR "Enable EmptyVector test" OFF)
option(ENABLE_TEST_SINGLE_ELEMENT "Enable SingleElement test" OFF)
option(ENABLE_TEST_ORIGINAL_TEST "Enable OriginalTest" OFF)

# create a list to hold the test definitions
set(TEST_DEFINITIONS "")

# add preprocessor definitions for the tests based on the options
foreach(TEST_OPTION IN ITEMS
    ENABLE_TEST_PAIR_EXISTS
    ENABLE_TEST_PAIR_DOES_NOT_EXIST
    ENABLE_TEST_NEGATIVE_NUMBERS
    ENABLE_TEST_EMPTY_VECTOR
    ENABLE_TEST_SINGLE_ELEMENT
    ENABLE_TEST_ORIGINAL_TEST)
    
    if(${TEST_OPTION})
        list(APPEND TEST_DEFINITIONS ${TEST_OPTION})
    endif()
endforeach()

# add the definitions to the target
if(TEST_DEFINITIONS)
    add_compile_definitions(${TEST_DEFINITIONS})
endif()
