// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_MOVE_UP_COMMAND_H__
#define __DCW_MOVE_UP_COMMAND_H__

#include "Command.hpp"

//! MoveUpCommand
/*!
 * The class MoveUpCommand is used to execute a movement command from player
 */
class MoveUpCommand: public Command {
 public:
    /*!
     * @brief Execute the actor move up command
     *
     * @param[in] actor The actor who will execute the move up command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_MOVE_UP_COMMAND_H__
