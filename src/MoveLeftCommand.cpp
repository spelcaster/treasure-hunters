// Copyright 2015 <https://github.com/spelcaster>

#include "../include/MoveLeftCommand.hpp"
#include "../include/Player.hpp"

/*!
 * @brief Execute the actor move left command
 *
 * @param[in] actor The actor who will execute the move left command
 */
void MoveLeftCommand::execute(Player& actor) {
    actor.moveLeft();
}
