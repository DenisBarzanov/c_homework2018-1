//
// Created by denis on 07.04.18.
//

#include "prevBiggestAndNextSmallest.h"

static unsigned int highest_order_bit_index(unsigned int n) {
    n |= n>>1u;
    n |= n>>2u;
    n |= n>>4u;
    n |= n>>8u;
    n |= n>>16u;
    n = n + 1u;
    return (n >> 1u);
}

static int get_ones_count(unsigned int value) {
    int count;
    for (count = 0; value != 0; count++, value &= value-1);
    return count;
}

unsigned int next_smallest(unsigned int number) {
    unsigned int result_number = highest_order_bit_index(number);
    const int ones_count = get_ones_count(number);
    for (int i = 1; i < ones_count; i++) {
        result_number |= (1u << 3u);
    }
    return result_number;
}

unsigned int prev_biggest(unsigned int number) {
    return (highest_order_bit_index(number) - 1) &
            1u;
}
