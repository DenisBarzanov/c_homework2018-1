//
// Created by denis on 27.03.18.
//

#include "vector.h"
#include <stdio.h>

#define START_CAPACITY 4
/**
 * Adds a new element to the vector and 
 * if needed expands it
 * @param this A pointer to the vector_t
 * @param element The element that would be added
 */
void vector_add(vector_t* this, int element) {
    if (this->size == this->capacity) {
        vector_expand(this);
    }
    this->array[this->size] = element;
    this->size++;
}
/**
 * Prints the vector
 * @param this A pointer to the vector_t
 */
void vector_print_element(int* element) {
    printf("%d ", *element);
}

/**
 * Frees the memory
 * @param this A pointer to the vector_t
 */
void vector_destroy(vector_t* this) {
    free(this->array);
    free(this);
}
/**
 * Removes a value at a given index. 
 * It is really shifting from its position and 
 * in fact overriding the index content
 * @param this A pointer to the vector_t
 * @param index The index at which the stuff would be 
 * removed
 */
void vector_remove_at(vector_t* this, int index) {
    
    for (int i = index; i < this->size; i++) {
        this->array[i] = this->array[i + 1];
    }
    this->size--;
}
/**
 * Expands the vector however much is needed
 * for the extra elements
 * @param this 
 */
void vector_expand(vector_t* this) {
    this->capacity *= 2;
    this->array = realloc(this->array, sizeof(int) * this->capacity);
}
/**
 * newVector has a role of a constructor
 * which means that it initialises everything with
 * the "default" values
 * @return a pointer to a vector_t structure
 */
vector_t * newVector() {

    vector_t* this = malloc(sizeof(vector_t));
    this->array = calloc(START_CAPACITY, sizeof(int));

    this->capacity = START_CAPACITY;
    this->size = 0;

    return this;
}

/**
 * 
 * @param this This is the vector 
 * @param consumer is the function that
 * will be called for each of the elements in the 
 * collection
 */
void vector_forEach(vector_t * this, consumer_t consumer) {
    for (int i = 0; i < this->size; i++) {
        consumer(&this->array[i]);
    }
}
