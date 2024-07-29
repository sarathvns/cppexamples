#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "sum_vector.h"

TEST(SumVectorTest, PositiveNumbers) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    EXPECT_EQ(sum_vector(numbers), 15);
}

TEST(SumVectorTest, NegativeNumbers) {
    std::vector<int> numbers = {-1, -2, -3, -4, -5};
    EXPECT_EQ(sum_vector(numbers), -15);
}

TEST(SumVectorTest, MixedNumbers) {
    std::vector<int> numbers = {-1, 2, -3, 4, -5};
    EXPECT_EQ(sum_vector(numbers), -3);
}

TEST(SumVectorTest, EmptyVector) {
    std::vector<int> numbers = {};
    EXPECT_EQ(sum_vector(numbers), 0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}