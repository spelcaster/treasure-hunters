// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_DEFEND_COMMAND_H__
#define __DCW_DEFEND_COMMAND_H__

#include "Command.hpp"

//! DefendCommand
/*!
 * The class DefendCommand is used to put player in defense stance
 */
class DefendCommand: public Command {
 public:
    /*!
     * @brief Execute the actor defend command
     *
     * @param[in] actor The actor who will execute the defend command
     */
    virtual void execute(Player& actor);
};

#endif  // __DCW_DEFEND_COMMAND_H__
