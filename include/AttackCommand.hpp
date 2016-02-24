// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_ATTACK_COMMAND_H__
#define __DCW_ATTACK_COMMAND_H__

#include "Command.hpp"
//! AttackCommand
/*!
 * The class AttackCommand is used to execute an attack from player
 */
class AttackCommand : public Command {
 public:
    /*!
     * @brief Execute the actor attack command
     *
     * @param[in] actor The actor who will execute the command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_ATTACK_COMMAND_H__
