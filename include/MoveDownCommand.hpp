// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_MOVE_DOWN_COMMAND_H__
#define __DCW_MOVE_DOWN_COMMAND_H__

#include "Command.hpp"

//! MoveDownCommand
/*!
 * The class MoveDownCommand is used to execute a movement command from player
 */
class MoveDownCommand: public Command {
 public:
    /*!
     * @brief Execute the actor move down command
     *
     * @param[in] actor The actor who will execute the move down command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_MOVE_DOWN_COMMAND_H__
