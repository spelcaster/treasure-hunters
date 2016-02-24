// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_MOVE_RIGHT_COMMAND_H__
#define __DCW_MOVE_RIGHT_COMMAND_H__

#include "Command.hpp"

//! MoveRightCommand
/*!
 * The class MoveRightCommand is used to execute a movement command from player
 */
class MoveRightCommand: public Command {
 public:
    /*!
     * @brief Execute the actor move right command
     *
     * @param[in] actor The actor who will execute the move right command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_MOVE_RIGHT_COMMAND_H__
