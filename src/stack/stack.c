//
// Created by denis on 07.04.18.
//

#include <stdlib.h>
#include "stack.h"

#define START_CAPACITY 4;

/**
 * This function creates a stack and by this
 * I mean it functions exactly like a Constructor
 * except that it does return a pointer to the stack entity
 * @return a pointer to a stack_t structure
 */

struct my_stack_t* stack_init() {
    struct my_stack_t* this = malloc(sizeof(struct my_stack_t));
    this->elements = calloc(4, sizeof(int));
    this->capacity = START_CAPACITY;
    this->size = 0;
    return this;
}

/**
 * I consider these functions as "member" functions
 * so I named the stack pointers - "this"
 * @param this That's a pointer a a stack_t structure
 * @param element This is the element we are going to add
 */
void stack_push(struct my_stack_t * this, int element) {
    if (this->capacity == this->size) {
        stack_expand(this);
    }
    this->elements[this->size] = element;
    this->size++;
}
/**
 *
 * @param this The stack pointer
 * @return The last ("top") element in the stack
 */
int stack_pop(struct my_stack_t * this) {
    return this->elements[--this->size];
}

/**
 * This function frees the memory taken by the stack
 * @param this That's the stack pointer again
 */
void stack_destroy(struct my_stack_t * this) {
    free(this->elements);
    free(this);
}

void stack_expand(struct my_stack_t* this) {
    this->elements =
            realloc(this->elements, sizeof(int) *
                                    this->capacity * 2);
    this->capacity *= 2;
}