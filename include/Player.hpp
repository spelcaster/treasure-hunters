// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_PLAYER_H__
#define __DCW_PLAYER_H__

#include <SFML/Graphics.hpp>

#include "KeyboardInputHandler.hpp"

//! Player
/*!
 * This class represents a player in the game
 */
class Player: public sf::Drawable {
 private:
    /*!
     * The player's life
     */
    float hp;

    /*!
     * The player's magic power
     */
    float mana;

    /*!
     * The player's input handler
     */
    KeyboardInputHandler input_handler;

    /*!
     * The player's shape
     */
    sf::RectangleShape player;

    /*!
     * The player's movement
     */
    sf::Vector2f movement;

    /*!
     * The game window boundaries
     * @todo Find a better way access window boundaries from Player
     */
    sf::Vector2i boundary;

public:
    //! Player constructor
    Player();

    //! Player destructor
    ~Player();

    /*!
     * @brief Move player to 'up' direction
     */
    void moveUp();

    /*!
     * @brief Move player to 'down' direction
     */
    void moveDown();

    /*!
     * @brief Move player to 'left' direction
     */
    void moveLeft();

    /*!
     * @brief Move player to 'right' direction
     */
    void moveRight();

    /*!
     * @brief Perform an attack
     *
     * @todo Implements attack
     */
    void attack();

    /*!
     * @brief Put player in defense stance
     *
     * @todo Implements defense
     */
    void defend();

    /*!
     * @brief Pause the game **hope the player is not dying**
     *
     * @todo Implements game pause
     */
    void pause();

    /*!
     * @brief Update player position in the window
     *
     * @param[in] window     A reference to the game window
     * @param[in] frame_time The game clock to avoid lag
     */
    void update(sf::RenderWindow& window, sf::Time frame_time);

    /*!
     * @brief Sets the player movement in 'x' direction
     *
     * @param[in] value The movement speed in 'x' direction
     *                  < 0 -> moving left
     *                  = 0 -> wait/stop
     *                  > 0 -> moving right
     *
     */
    void setMovementX(float value);

    /*!
     * @brief Sets the player movement in 'y' direction
     *
     * @pram[in] value The movement speed in 'y' direction
     *                 < 0 -> moving down
     *                 = 0 -> wait/stop
     *                 > 0 -> moving up
     */
    void setMovementY(float value);

    /*!
     * @brief Updates the player movement in 'x' direction
     *
     * @param[in] value The factor value to modify the player speed in 'x'
     *                  direction
     */
    void updateMovementX(float value);

    /*!
     * @brief Updates the player movement in 'y' direction
     *
     * @param[in] value The factor value to modify the player speed in 'y'
     *                  direction
     */
    void updateMovementY(float value);

    /*!
     * @brief Get an itself reference
     *
     * @returns A reference to itself
     */
    Player& self();

    /*!
     * @see sf::Drawable::draw
     */
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif  // __DCW_PLAYER_H__
