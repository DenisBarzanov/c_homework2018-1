//
// Created by denis on 07.04.18.
//

#include "unique_chars.h"

bool are_letters_unique(const char * letters, size_t size) {
    for (int i = 0; i < size; i++) {
        char currentChar = letters[i];
        for (int j = i + 1; j < size; j++) {
            int currentSecondChar = letters[j];

            if (currentChar == currentSecondChar) {
                return false;
            }
        }
    }
    return true;
}
