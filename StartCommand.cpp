// Copyright 2015 <https://github.com/spelcaster>

#include "include/StartCommand.hpp"
#include "include/Player.hpp"

/*!
 * @brief
 *
 * @param[in] actor The actor who wants to pause the game, maybe he is
 *                  almost dying >.<'
 */
void StartCommand::execute(Player& actor) {
    actor.pause();
}
