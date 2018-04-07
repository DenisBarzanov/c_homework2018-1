//
// Created by denis on 07.04.18.
//

#include <gtest/gtest.h>
#include <xor/xor.h>

class XorTests : public ::testing::Test
{
protected:

    const unsigned int number1 = 0b100101;
    const unsigned int number2 = 0b011101;
};

TEST_F(XorTests, testXorWorksWithoutUsingXorOperator) {
    const unsigned int expected_xor = 0b111000;
    EXPECT_EQ(my_xor(number1, number2),
              expected_xor);
}
