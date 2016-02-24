// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_MOVE_LEFT_COMMAND_H__
#define __DCW_MOVE_LEFT_COMMAND_H__

#include "Command.hpp"

//! MoveLeftCommand
/*!
 * The class MoveLeftCommand is used to execute a movement command from player
 */
class MoveLeftCommand: public Command {
 public:
    /*!
     * @brief Execute the actor move left command
     *
     * @param[in] actor The actor who will execute the move left command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_MOVE_LEFT_COMMAND_H__
