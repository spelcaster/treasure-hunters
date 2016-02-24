// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_COMMAND_H__
#define __DCW_COMMAND_H__

class Player;

//! Command Interface
/*!
 * The interface Command is used to abstract a player action
 */
class Command {
 public:
    /*!
     * @brief Virtual destructor for Command
     */
    virtual ~Command() {
    }

    /*!
     * @brief Executes a command from actor
     *
     * @param[in] actor The actor who will execute the command
     */
    virtual void execute(Player& actor)=0;
};

#endif  // __DCW_COMMAND_H__
