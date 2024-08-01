#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "prime.h"

// Test case for checking if the number is prime
TEST(IsPrimeTest, HandlesPositiveInput) {
    EXPECT_TRUE(isPrime(2));  // 2 is a prime number
    EXPECT_TRUE(isPrime(3));  // 3 is a prime number
    EXPECT_FALSE(isPrime(4)); // 4 is not a prime number
    EXPECT_TRUE(isPrime(5));  // 5 is a prime number
}

// Test case for non-positive numbers
TEST(IsPrimeTest, HandlesNonPositiveInput) {
    EXPECT_FALSE(isPrime(-1)); // Negative numbers are not prime
    EXPECT_FALSE(isPrime(0));  // 0 is not a prime number
    EXPECT_FALSE(isPrime(1));  // 1 is not a prime number
}

// Main function for running all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
