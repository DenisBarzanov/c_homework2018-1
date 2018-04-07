//
// Created by denis on 04.04.18.
//

#ifndef C_HOMEWORK_GAME_H
#define C_HOMEWORK_GAME_H

#include <stdbool.h>
#include <stdlib.h>

struct game_t {
    int id, price;
    const char *country_code;
};
#ifdef __cplusplus
extern "C" {
#endif
    /* Declarations of this file */
    bool is_game_available(struct game_t, const char[4]);
    int how_many_available(struct game_t *, size_t, const char[4]);
#ifdef __cplusplus
}
#endif

#endif //C_HOMEWORK_GAME_H
