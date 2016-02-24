// Copyright 2015 <https://github.com/spelcaster>

#include "include/DefendCommand.hpp"
#include "include/Player.hpp"

/*!
 * @brief Execute the actor defend command
 *
 * @param[in] actor The actor who will execute the defend command
 */
void DefendCommand::execute(Player& actor) {
    actor.defend();
}
