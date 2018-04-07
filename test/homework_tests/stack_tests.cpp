//
// Created by denis on 07.04.18.
//

#include <gtest/gtest.h>
#include <stack/stack.h>

class StackTests : public ::testing::Test {
protected:
    const int stack_iterations_count = 9;
    struct my_stack_t* stack = NULL;
    /**
     * Initialise the stack and
     * put some values in the it
     */
    void SetUp() override {
        this->stack = stack_init();
        for(int i = 0; i < stack_iterations_count; i++) {
            stack_push(this->stack, i);
        }
    }

    void TearDown() override {
        stack_destroy(this->stack);
    }
};
/**
 * Checks if the stack is initialised correclty
 */
TEST_F(StackTests, testStackIsInitialisedCorreclty) {
    ASSERT_EQ(this->stack->size, stack_iterations_count);
    ASSERT_EQ(this->stack->capacity, 16);
}

/**
 * Test if the elements are in the stack
 * and if the stack expands
 */
TEST_F(StackTests, testStackPushesCorrectlyAndExpands) {
    for(int i = 0; i < stack_iterations_count; i++) {
        EXPECT_EQ(this->stack->elements[i], i);
    }
}

TEST_F(StackTests, testStackPopsCorrectlyAndExpands) {
    for(int i = 0; i < stack_iterations_count; i++) {
        EXPECT_EQ(stack_pop(this->stack), stack_iterations_count - i - 1);
    }
}