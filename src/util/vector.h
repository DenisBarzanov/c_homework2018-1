//
// Created by denis on 27.03.18.
//

#ifndef VECTORIMPL_VECTOR_H
#define VECTORIMPL_VECTOR_H

#include <stdlib.h>
/**
 * The function type that would be used for
 */
typedef void (*consumer_t)(int*);

typedef struct {
    int size;
    int capacity;
    int* array;
} vector_t;
#ifdef __cplusplus
extern "C" {
#endif

    void vector_add(vector_t *, int);

    void vector_print_element(int *);

    void vector_remove_at(vector_t *, int);

    void vector_destroy(vector_t *);

    void vector_expand(vector_t *);

    vector_t *newVector();

    void vector_forEach(vector_t *, consumer_t);

#ifdef __cplusplus
}
#endif

#endif //VECTORIMPL_VECTOR_H
