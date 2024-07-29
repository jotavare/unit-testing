# check if testing is enabled, by default it is
if(BUILD_TESTING)
    # create an executable for the test
    add_executable(hasPairTest hasPairTest.cpp)

    # link the test executable with the googletest library and any other necessary libraries
    target_link_libraries(hasPairTest PRIVATE GTest::gtest_main cxx_setup)

    # include googletest module
    include(GoogleTest)

    # option to enable or disable individual tests
    option(ENABLE_TEST_PAIR_EXISTS "Enable PairExists test" ON)
    option(ENABLE_TEST_PAIR_DOES_NOT_EXIST "Enable PairDoesNotExist test" ON)
    option(ENABLE_TEST_NEGATIVE_NUMBERS "Enable NegativeNumbers test" ON)
    option(ENABLE_TEST_EMPTY_VECTOR "Enable EmptyVector test" ON)
    option(ENABLE_TEST_SINGLE_ELEMENT "Enable SingleElement test" ON)
    option(ENABLE_TEST_ORIGINAL_TEST "Enable OriginalTest" ON)

    # add test conditions
    if(ENABLE_TEST_PAIR_EXISTS)
        add_test(NAME PairExists COMMAND HasPairTest --gtest_filter=HasPairTest.PairExists)
    endif()
    if(ENABLE_TEST_PAIR_DOES_NOT_EXIST)
        add_test(NAME PairDoesNotExist COMMAND hasPairTest --gtest_filter=HasPairTest.PairDoesNotExist)
    endif()
    if(ENABLE_TEST_NEGATIVE_NUMBERS)
        add_test(NAME NegativeNumbers COMMAND hasPairTest --gtest_filter=HasPairTest.NegativeNumbers)
    endif()
    if(ENABLE_TEST_EMPTY_VECTOR)
        add_test(NAME EmptyVector COMMAND hasPairTest --gtest_filter=HasPairTest.EmptyVector)
    endif()
    if(ENABLE_TEST_SINGLE_ELEMENT)
        add_test(NAME SingleElement COMMAND hasPairTest --gtest_filter=HasPairTest.SingleElement)
    endif()
    if(ENABLE_TEST_ORIGINAL_TEST)
        add_test(NAME OriginalTest COMMAND hasPairTest --gtest_filter=HasPairTest.OriginalTest)
    endif()
endif()
