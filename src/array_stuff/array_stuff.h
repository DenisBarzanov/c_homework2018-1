//
// Created by denis on 07.04.18.
//

#ifndef C_HOMEWORK_ARRAY_STUFF_H
#define C_HOMEWORK_ARRAY_STUFF_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../util/vector.h"

typedef bool (*compare_em_t) (int, int);
#ifdef __cplusplus
        extern "C" {
#endif
/* Declarations of this file */
    void print_array(vector_t *);
    void input_array(vector_t *);
    int biggest_even_in_array(vector_t *);
    int smallest_even_in_array(vector_t *);
#ifdef __cplusplus
}
#endif

#endif //C_HOMEWORK_ARRAY_STUFF_H
