//
// Created by denis on 04.04.18.
//

#include <string.h>
#include "game.h"
/**
 *
 * @param game The game structure
 * @param country_code
 * The string we are using to
 * determine if the game is available in that country
 *
 * @return a boolean to determine whether
 * the game's country code is the same
 * @author me
 */
bool is_game_available(struct game_t game, const char country_code[4]) {
    return strcmp(game.country_code, country_code) == 0;
}
/**
 *
 * @param games This is the games array
 * @param game_count This is the size of the array
 * @param country_code The string we use to determine if
 * each individual game is available in that country
 * @return the number of games available in the country
 */
int how_many_available(struct game_t * games, size_t game_count, const char country_code[4]) {
    int available_games = 0;
    for (int i = 0; i < game_count; i++) {
        if (is_game_available(games[i], country_code)) {
            available_games++;
        }
    }
    return available_games;
}
