// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_START_COMMAND_H__
#define __DCW_START_COMMAND_H__

#include "Command.hpp"

//! StartCommand
/*!
 * The class StartCommand is used for pause command
 */
class StartCommand: public Command {
 public:
    /*!
     * @brief
     *
     * @param[in] actor The actor who wants to pause the game, maybe he is
     *                  almost dying >.<'
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_START_COMMAND_H__
