//
// Created by denis on 04.04.18.
//

#include <game/game.h>
#include <gtest/gtest.h>

class GameTests : public ::testing::Test
{
protected:
    struct game_t game {};
    const char * target_country_code = "359";
    static const int games_size = 10;
    struct game_t games[games_size] = {
            {.id = 1, .price = 69, .country_code = "359"},
            {.id = 1, .price = 1, .country_code = "44"},
            {.id = 1, .price = 1, .country_code = "359"},
            {.id = 1, .price = 1, .country_code = "41"},
            {.id = 1, .price = 1, .country_code = "89"},
            {.id = 1, .price = 1, .country_code = "359"},
            {.id = 1, .price = 1, .country_code = "44"},
            {.id = 1, .price = 1, .country_code = "41"},
            {.id = 1, .price = 1, .country_code = "359"},
            {.id = 1, .price = 1, .country_code = "89"},
    };
    void SetUp() override {
        game.country_code = "359";
    }
};

TEST_F(GameTests, gameTestIsAvailable) {
    ASSERT_TRUE(is_game_available(game, target_country_code));
}

TEST_F(GameTests, gameTestHowManyAvailable) {
    int expected_available_games = 4;

    ASSERT_EQ(how_many_available(games,
                                 games_size,
                                 target_country_code), expected_available_games);
}

