//
// Created by denis on 08.04.18.
//

#include <gtest/gtest.h>
#include <util/vector.h>
#include <array_stuff/array_stuff.h>

class ArrayStuffTests : public ::testing::Test {
protected:
    vector_t* vector = {};
    const int biggestEven = 100;
    const int smallestEven = 6;
    void SetUp() override {
        vector = newVector();
        vector_add(vector, 100);
        vector_add(vector, 19);
        vector_add(vector, 3);
        vector_add(vector, 7);
        vector_add(vector, 5);
        vector_add(vector, 6);
        vector_add(vector, 105);
        vector_add(vector, 99);
    }

    void TearDown() override {
        vector_destroy(vector);
    }
};

TEST_F(ArrayStuffTests, testFindsSmallestEven) {
    int biggestEven = biggest_even_in_array(vector);
    EXPECT_EQ(this->biggestEven, biggestEven);
}

TEST_F(ArrayStuffTests, testFindsBiggestEven) {
    int smallestEven = smallest_even_in_array(vector);
    EXPECT_EQ(this->smallestEven, smallestEven);
}