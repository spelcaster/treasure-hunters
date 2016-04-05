// Copyright 2015 <https://github.com/spelcaster>

#include "../include/MoveUpCommand.hpp"
#include "../include/Player.hpp"

/*!
 * @brief Execute the actor move up command
 *
 * @param[in] actor The actor who will execute the move up command
 */
void MoveUpCommand::execute(Player& actor) {
    actor.moveUp();
}
