// Copyright 2015 <https://github.com/spelcaster>

#include "../include/Player.hpp"
#include "../include/Constants.hpp"

//! Player constructor
Player::Player() {
    hp = 10.f;
    mana = 10.f;

    player.setSize(sf::Vector2f(32, 32));
    player.setFillColor(sf::Color::Red);

    movement.x = 0.f;
    movement.y = 0.f;

    boundary.x = 0;
    boundary.y = 0;
}

//! Player destructor
Player::~Player() {
}

/*!
 * @see sf::Drawable::draw
 */
void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(player, states);
}

/*!
 * @brief Get an itself reference
 *
 * @returns A reference to itself
 */
Player& Player::self() {
    return *this;
}

/*!
 * @brief Sets the player movement in 'x' direction
 *
 * @param[in] value The movement speed in 'x' direction
 *                  < 0 -> moving left
 *                  = 0 -> wait/stop
 *                  > 0 -> moving right
 *
 */
void Player::setMovementX(float value) {
    movement.x = value;
}

/*!
 * @brief Sets the player movement in 'y' direction
 *
 * @pram[in] value The movement speed in 'y' direction
 *                 < 0 -> moving down
 *                 = 0 -> wait/stop
 *                 > 0 -> moving up
 */
void Player::setMovementY(float value) {
    movement.y = value;
}

/*!
 * @brief Updates the player movement in 'x' direction
 *
 * @param[in] value The factor value to modify the player speed in 'x'
 *                  direction
 */
void Player::updateMovementX(float value) {
    movement.x *= value;
}

/*!
 * @brief Updates the player movement in 'y' direction
 *
 * @param[in] value The factor value to modify the player speed in 'y'
 *                  direction
 */
void Player::updateMovementY(float value) {
    movement.y *= value;
}

/*!
 * @brief Move player to 'up' direction
 */
void Player::moveUp() {
    if (player.getPosition().y > 0) {
        setMovementY(-kMovementSpeed);
    }
}

/*!
 * @brief Move player to 'down' direction
 */
void Player::moveDown() {
    if (player.getPosition().y < boundary.y - player.getSize().y) {
        setMovementY(kMovementSpeed);
    }
}

/*!
 * @brief Move player to 'left' direction
 */
void Player::moveLeft() {
    if (player.getPosition().x > 0) {
        setMovementX(-kMovementSpeed);
    }
}

/*!
 * @brief Move player to 'right' direction
 */
void Player::moveRight() {
    if (player.getPosition().x < boundary.x - player.getSize().x) {
        setMovementX(kMovementSpeed);
    }
}

/*!
 * @brief Perform an attack
 *
 * @todo Implements attack
 */
void Player::attack() {
}

/*!
 * @brief Put player in defense stance
 *
 * @todo Implements defense
 */
void Player::defend() {
}

/*!
 * @brief Pause the game **hope the player is not dying**
 *
 * @todo Implements game pause
 */
void Player::pause() {
}

/*!
 * @brief Update player position in the window
 *
 * @param[in] window     A reference to the game window
 * @param[in] frame_time The game clock to avoid lag
 */
void Player::update(sf::RenderWindow& window, sf::Time frame_time) {
    boundary.x = window.getSize().x;
    boundary.y = window.getSize().y;

    movement.x = 0.f;
    movement.y = 0.f;

    input_handler.handleInput(self());

    player.move(movement * frame_time.asSeconds());
}
