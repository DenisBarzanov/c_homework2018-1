//
// Created by denis on 07.04.18.
//

#include <gtest/gtest.h>
#include <unique_chars/unique_chars.h>

class UniqueLetterTests : public ::testing::Test {
protected:
    const char * uniqueLetters = "This mango";
    const size_t uniqueLettersSize = 10;
};

TEST_F(UniqueLetterTests, testLettersAreUnique) {
    ASSERT_TRUE(are_letters_unique(uniqueLetters, uniqueLettersSize));
}

TEST_F(UniqueLetterTests, testLettersAreNotUnique) {
    const char * nonUniqueLetters = "This miango";
    const size_t nonUniqueLettersSize = 11;
    ASSERT_FALSE(are_letters_unique(nonUniqueLetters, nonUniqueLettersSize));
}
