//
// Created by denis on 07.04.18.
//

#include <stdbool.h>
#include "prevBiggestAndNextSmallest.h"

static int get_ones_count(unsigned value);
static void inc(unsigned * number);
static void dec(unsigned * number);
static unsigned int next_smallest_or_prev_biggest(unsigned number,

void (*inc_or_dec)(unsigned*))
{
    const int ones_count = get_ones_count(number);
    if (!ones_count) {
        return 0;
    }
    unsigned int next_smallest_or_biggest = number;
    do {
        inc_or_dec(&next_smallest_or_biggest);
    } while (get_ones_count(next_smallest_or_biggest) != ones_count);
    return next_smallest_or_biggest;
}

unsigned int next_smallest(unsigned number) {
    return next_smallest_or_prev_biggest(number, inc);
}

unsigned int prev_biggest(unsigned number) {
    return next_smallest_or_prev_biggest(number, dec);
}

static int get_ones_count(unsigned value) {
    int count;
    for (count = 0; value != 0; count++, value &= value-1);
    return count;
}

void dec(unsigned *number) {
    --(*number);
}

void inc(unsigned *number) {
    ++(*number);
}