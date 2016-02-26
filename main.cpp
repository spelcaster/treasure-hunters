// Copyright 2015 <https://github.com/spelcaster>

#include <SFML/Graphics.hpp>
#include "include/Game.hpp"

/*!
 * @brief Program main function
 */
int main() {
    Game* game = new Game();
    game->run();

    return 0;
}
