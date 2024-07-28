#include "gtest/gtest.h"

namespace {
    int GetMeaningOfLife()
    {
        return 42;
    }
}

TEST(MeaningOfLifeTest, Returns42)
{
    EXPECT_EQ(GetMeaningOfLife(), 42);
}

TEST(MeaningOfLifeTest, MoreReturns42)
{
    ASSERT_EQ(GetMeaningOfLife(), 42) << "Meaning of life is not 42!";
    EXPECT_FLOAT_EQ(23.23F, 23.23F);
}