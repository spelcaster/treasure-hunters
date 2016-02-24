// Copyright 2015 <https://github.com/spelcaster>

#include "include/MoveDownCommand.hpp"
#include "include/Player.hpp"

/*!
 * @brief Execute the actor move down command
 *
 * @param[in] actor The actor who will execute the move down command
 */
void MoveDownCommand::execute(Player& actor) {
    actor.moveDown();
}
