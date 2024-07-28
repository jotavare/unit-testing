# check if testing is enabled, by default it is enabled
if(BUILD_TESTING)
    # create an executable for the test
    add_executable(hasPairTest hasPairTest.cpp)
    
    # link the test executable with the googletest and any other necessary libraries
    target_link_libraries(hasPairTest PRIVATE GTest::gtest_main cxx_setup)

    # include googletest helper function
    include(GoogleTest)

    # automatically discover and register tests
    gtest_discover_tests(hasPairTest)
endif()
