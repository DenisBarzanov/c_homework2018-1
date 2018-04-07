//
// Created by denis on 07.04.18.
//

#include <stdio.h>
#include <stdlib.h>
#include <util/vector.h>
#include <stdbool.h>
#include "array_stuff.h"

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

int biggest_even_in_array(vector_t *vector) {
    int biggest_even = vector->array[0];
    for (int i = 1; i < vector->size; i++) {
        int current_element = vector->array[i];
        if (current_element % 2 == 0 &&
            biggest_even < current_element) {
            biggest_even = current_element;
        }
    }
    return biggest_even;
}

int smallest_even_in_array(vector_t * vector) {
    int smallest_even = vector->array[vector->size - 1];
    for (int i = vector->size - 2; i > 0; i--) {
        int current_element = vector->array[i];
        if (current_element % 2 == 0 &&
            smallest_even > current_element) {
            smallest_even = current_element;
        }
    }
    return smallest_even;
}