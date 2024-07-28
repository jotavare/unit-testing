if(BUILD_TESTING)
    add_executable(hasPairTest hasPairTest.cpp)
    target_link_libraries(hasPairTest PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(hasPairTest)
endif()
