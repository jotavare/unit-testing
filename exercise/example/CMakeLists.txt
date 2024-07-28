# minimum versionx required
cmake_minimum_required(VERSION 3.16..3.24)

# project name, version, description, and language 
project(try_googletest
    VERSION 0.0.1
    DESCRIPTION "Google Test"
    LANGUAGES CXX)

# create a cached variable
set(FOO "foo" CACHE STRING "Description")
message(STATUS "Value of FOO: ${FOO}")

# # forces value even if we use -D to set it
# set(FOO "foo" CACHE STRING "Description" FORCE)
# message(STATUS "Forced value of FOO: ${FOO}")

# # still saves on the cache but wont show on the configuration
# set(FOO "foo" CACHE INTERNAL "Description" FORCE)
# message(STATUS "Internal value of FOO: ${FOO}")

# # local variable
# set(FOO "foo")
# message(STATUS "Local value of FOO: ${FOO}")

# # example shared library
# add_library(my_library SHARED
# ${PROJECT_SOURCE_DIR}/folder/source_1.cpp source_2.cpp)

# # example static library
# add_library(my_library STATIC
# ${PROJECT_SOURCE_DIR}/folder/source_1.cpp source_2.cpp)

# # example header only library, no source files needed
# add_library(my_library INTERFACE)

# # executable with main function
# add_executable(my_executable source_with_main.cpp)

# # target properties per target (PUBLIC, PRIVATE, INTERFACE)
# command(my_target <VISIBILITY> properties)

# # dependencies between targets
# target_link_libraries(my_target PUBLIC|PRIVATE|INTERFACE lib)

# # properties per target
# -I or -i # include directories
# -L or -l # link directories
# -std=c++17 # c++ standard
# -Wall -Wextra -Werror # warnings
# -O3 # optimization level
# -g # debug information
# -pedantic # strict standard
# -fsanitize=address # address sanitizer

# # additional comments
# use PRIVATE properties with add_executable targets
# mostly use PUBLIC properties on library targets
# use INTERFACE properties on header-only library targets

# Always specify visibility with commands:
# target_include_directories
# target_compile_options
# target_compile_features
# target_link_libraries
# (generally any command that starts with target_)

