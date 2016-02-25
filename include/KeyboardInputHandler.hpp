// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_KEYBOARD_INPUT_HANDLER_H__
#define __DCW_KEYBOARD_INPUT_HANDLER_H__

#include <SFML/Window/Keyboard.hpp>

#include "MoveUpCommand.hpp"
#include "MoveDownCommand.hpp"
#include "MoveLeftCommand.hpp"
#include "MoveRightCommand.hpp"
#include "StartCommand.hpp"
#include "AttackCommand.hpp"
#include "DefendCommand.hpp"

class Player;

//! KeyboardInputHandler
/*!
 * The class KeyboardInputHandler represents the player input
 */
class KeyboardInputHandler {
 private:
    /*!
     * Keyboard code that represents directional up
     */
    sf::Keyboard::Key key_up;

    /*!
     * Command for key_up press event
     */
    MoveUpCommand* command_up;

    /*!
     * Keyboard code that represents directional down
     */
    sf::Keyboard::Key key_down;

    /*!
     * Command for key_down press event
     */
    MoveDownCommand* command_down;

    /*!
     * Keyboard code that represents directional left
     */
    sf::Keyboard::Key key_left;

    /*!
     * Command for key_left press event
     */
    MoveLeftCommand* command_left;

    /*!
     * Keyboard code that represents directional right
     */
    sf::Keyboard::Key key_right;

    /*!
     * Command for key_right press event
     */
    MoveRightCommand* command_right;

    /*!
     * Keyboard code that represents start button
     */
    sf::Keyboard::Key key_start;

    /*!
     * Command for key_start press event
     */
    StartCommand* command_start;

    /*!
     * Keyboard code that represents 'a' button
     */
    sf::Keyboard::Key key_a;

    /*!
     * Comand for key_a press event
     */
    AttackCommand* command_a;

    /*!
     * Keyboard code that represents 'b' button
     */
    sf::Keyboard::Key key_b;

    /*!
     * Command for key_b press event
     */
    DefendCommand* command_b;

 public:
    //! KeyboardInputHandler constructor
    KeyboardInputHandler();

    /*!
     * @brief Update key_up keyboard code
     *
     * @param[in] key New key_up keyboard code
     */
    void setKeyUp(sf::Keyboard::Key key);

    /*!
     * @brief Update key_down keyboard code
     *
     * @param[in] key New key_down keyboard code
     */
    void setKeyDown(sf::Keyboard::Key key);

    /*!
     * @brief Update key_left keyboard code
     *
     * @param[in] key New key_left keyboard code
     */
    void setKeyLeft(sf::Keyboard::Key key);

    /*!
     * @brief Update key_right keyboard code
     *
     * @param[in] key New key_right keyboard code
     */
    void setKeyRight(sf::Keyboard::Key key);

    /*!
     * @brief Update key_start keyboard code
     *
     * @param[in] key New key_start keyboard code
     */
    void setKeyStart(sf::Keyboard::Key key);

    /*!
     * @brief Update key_a keyboard code
     *
     * @param[in] key New key_a keyboard code
     */
    void setKeyA(sf::Keyboard::Key key);

    /*!
     * @brief Update key_b keyboard code
     *
     * @param[in] key New key_b keyboard code
     */
    void setKeyB(sf::Keyboard::Key key);

    /*!
     * @brief Handle input for a Player
     *
     * @param[in] actor The player that will check for key press events
     */
    void handleInput(Player& actor);
};

#endif  // __DCW_KEYBOARD_INPUT_HANDLER_H__
