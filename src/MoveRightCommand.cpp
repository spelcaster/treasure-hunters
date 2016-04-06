// Copyright 2015 <https://github.com/spelcaster>

#include "../include/MoveRightCommand.hpp"
#include "../include/Player.hpp"

/*!
 * @brief Execute the actor move right command
 *
 * @param[in] actor The actor who will execute the move right command
 */
void MoveRightCommand::execute(Player& actor) {
    actor.moveRight();
}
