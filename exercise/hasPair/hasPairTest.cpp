#include <gtest/gtest.h>
#include "hasPair.cpp"

#ifdef ENABLE_TEST_PAIR_EXISTS
// test with a pair that sums to x
TEST(HasPairTest, PairExists) {
    vector<int> A = {1, 4, 45, 6, 10, -8};
    int x = 16;
    EXPECT_TRUE(hasPair(A, x));
}
#endif

#ifdef ENABLE_TEST_PAIR_DOES_NOT_EXIST
// test with no pair that sums to x
TEST(HasPairTest, PairDoesNotExist) {
    vector<int> A = {1, 2, 3, 9, 10};
    int x = 20;
    EXPECT_FALSE(hasPair(A, x));
}
#endif

#ifdef ENABLE_TEST_NEGATIVE_NUMBERS
// test with negative numbers
TEST(HasPairTest, NegativeNumbers) {
    vector<int> A = {-1, -2, -3, -4, -5};
    int x = -8;
    EXPECT_TRUE(hasPair(A, x));
}
#endif

#ifdef ENABLE_TEST_EMPTY_VECTOR
// test with an empty vector
TEST(HasPairTest, EmptyVector) {
    vector<int> A = {};
    int x = 10;
    EXPECT_FALSE(hasPair(A, x));
}
#endif

#ifdef ENABLE_TEST_SINGLE_ELEMENT
// test with a single element vector
TEST(HasPairTest, SingleElement) {
    vector<int> A = {5};
    int x = 5;
    EXPECT_FALSE(hasPair(A, x));
}
#endif

#ifdef ENABLE_TEST_ORIGINAL_TEST
// test with the original vector
TEST(HasPairTest, OriginalTest) {
    vector<int> A = {1, 4, 45, 45, 5, 67, 77, 8, 2, -3, 321, 542, -66, 100, 200};
    int x = 10;
    EXPECT_TRUE(hasPair(A, x));
}
#endif

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}