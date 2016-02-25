// Copyright 2015 <https://github.com/spelcaster>

#include "include/KeyboardInputHandler.hpp"

//! KeyboardInputHandler constructor
KeyboardInputHandler::KeyboardInputHandler() {
    command_up = new MoveUpCommand();
    command_down = new MoveDownCommand();
    command_left = new MoveLeftCommand();
    command_right = new MoveRightCommand();
    command_start = new StartCommand();
    command_a = new AttackCommand();
    command_b = new DefendCommand();

    key_up = sf::Keyboard::Key::Up;
    key_down = sf::Keyboard::Key::Down;
    key_left = sf::Keyboard::Key::Left;
    key_right = sf::Keyboard::Key::Right;
    key_start = sf::Keyboard::Key::Return;
    key_a = sf::Keyboard::Key::A;
    key_b = sf::Keyboard::Key::B;
}

/*!
 * @brief Update key_up keyboard code
 *
 * @param[in] key New key_up keyboard code
 */
void KeyboardInputHandler::setKeyUp(sf::Keyboard::Key key) {
    key_up = key;
}

/*!
 * @brief Update key_down keyboard code
 *
 * @param[in] key New key_down keyboard code
 */
void KeyboardInputHandler::setKeyDown(sf::Keyboard::Key key) {
    key_down = key;
}

/*!
 * @brief Update key_left keyboard code
 *
 * @param[in] key New key_left keyboard code
 */
void KeyboardInputHandler::setKeyLeft(sf::Keyboard::Key key) {
    key_left = key;
}

/*!
 * @brief Update key_right keyboard code
 *
 * @param[in] key New key_right keyboard code
 */
void KeyboardInputHandler::setKeyRight(sf::Keyboard::Key key) {
    key_right = key;
}

/*!
 * @brief Update key_start keyboard code
 *
 * @param[in] key New key_start keyboard code
 */
void KeyboardInputHandler::setKeyStart(sf::Keyboard::Key key) {
    key_start = key;
}

/*!
 * @brief Update key_a keyboard code
 *
 * @param[in] key New key_a keyboard code
 */
void KeyboardInputHandler::setKeyA(sf::Keyboard::Key key) {
    key_a = key;
}

/*!
 * @brief Update key_b keyboard code
 *
 * @param[in] key New key_b keyboard code
 */
void KeyboardInputHandler::setKeyB(sf::Keyboard::Key key) {
    key_b = key;
}

/*!
 * @brief Handle input for a Player
 *
 * @param[in] actor The player that will check for key press events
 */
void KeyboardInputHandler::handleInput(Player& actor) {
    if (sf::Keyboard::isKeyPressed(key_up)) {
        command_up->execute(actor);
    } else if (sf::Keyboard::isKeyPressed(key_down)) {
        command_down->execute(actor);
    }

    if (sf::Keyboard::isKeyPressed(key_left)) {
        command_left->execute(actor);
    } else if (sf::Keyboard::isKeyPressed(key_right)) {
        command_right->execute(actor);
    }

    if (sf::Keyboard::isKeyPressed(key_start)) {
        command_start->execute(actor);
    } else if (sf::Keyboard::isKeyPressed(key_a)) {
        command_a->execute(actor);
    } else if (sf::Keyboard::isKeyPressed(key_b)) {
        command_b->execute(actor);
    }
}
