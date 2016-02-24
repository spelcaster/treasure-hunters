// Copyright 2015 <https://github.com/spelcaster>

#include "include/AttackCommand.hpp"
#include "include/Player.hpp"

/*!
 * @brief Execute the attack command
 *
 * @param[in] actor The actor who will execute the attack command
 */
void AttackCommand::execute(Player& actor) {
    actor.attack();
}
