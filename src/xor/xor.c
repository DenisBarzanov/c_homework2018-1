//
// Created by denis on 06.04.18.
//

#include "xor.h"

int my_xor(unsigned int a, unsigned int b) {
    return (a | b) &  // OR them (It's a XOR nonetheless...)
           (~a | ~b); // Remove extra bits set
}
