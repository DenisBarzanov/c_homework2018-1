//
// Created by denis on 07.04.18.
//

#include "array_stuff.h"

static bool smallest(int a, int b);

static bool biggest(int a, int b);

static int biggest_or_smallest_in_array(vector_t* vector, bool (*biggest_or_smallest_fn)(int, int));

/**
 *
 * @param array This is the array that we are
 * going to fill
 * @param capacity This is the current capacity of the array
 * @return
 */

void input_array(vector_t* vector) {
    int input;
    while (scanf("%d", &input) != EOF) {
        vector_add(vector, input);
    }
}
/**
 * Apply consumer for printing for each element in the
 * array
 * @param vector This is the vector pointer
 */
void print_array(vector_t * vector) {
    vector_forEach(vector, vector_print_element);
}
/**
 * That's a universal function that
 * finds either the [biggest or smallest] even
 * number in a vector_t structure
 * @param vector This is the "array"
 * @param biggest_or_smallest_fn This is the
 * function that is used for determining whether
 * the "universal" function is searching for a biggest OR smallest
 * number
 * @return The biggest or smallest number
 */
static int biggest_or_smallest_in_array(vector_t *vector, bool (*biggest_or_smallest_fn)(int, int)) {
    int biggest_or_smallest_even = vector->array[0];
    for (int i = 1; i < vector->size; i++) {
        int current_element = vector->array[i];
        if (current_element % 2 == 0 &&
            biggest_or_smallest_fn(
                    biggest_or_smallest_even,
                    current_element)) {
            biggest_or_smallest_even = current_element;
        }
    }
    return biggest_or_smallest_even;
}

/**
 * Calls the universal function
 * with a function that is used for grabbing the
 * biggest number
 * @param vector This is the vector
 * @return The biggest even
 */
int biggest_even_in_array(vector_t *vector) {
    return biggest_or_smallest_in_array(vector, biggest);
}

/**
 * Calls the universal function
 * with a function that is used for grabbing the
 * smallest number
 * @param vector This is the vector
 * @return The smallest even
 */
int smallest_even_in_array(vector_t * vector) {
    return biggest_or_smallest_in_array(vector, smallest);
}

static bool smallest(int a, int b) {
    return a > b;
}

static bool biggest(int a, int b) {
    return a < b;
}

