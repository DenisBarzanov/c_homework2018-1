//
// Created by denis on 08.04.18.
//

#include <gtest/gtest.h>
#include <nextSmallestAndPrevBiggest/prevBiggestAndNextSmallest.h>

class PrevBiggestAndNextSmallestTestSuite : public ::testing::Test {
public:
    const unsigned targetNumber = 0b10100;
};

TEST_F(PrevBiggestAndNextSmallestTestSuite,
       testNextSmallestIsCorrect) {
    const unsigned expectedNextSmallest = 0b11000;
    EXPECT_EQ(next_smallest(this->targetNumber), expectedNextSmallest);
}

TEST_F(PrevBiggestAndNextSmallestTestSuite,
       testPrevBiggest) {
    int expectedPrevBiggest = 0b10010;
    EXPECT_EQ(prev_biggest(this->targetNumber), expectedPrevBiggest);
}
