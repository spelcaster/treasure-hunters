// Copyright 2015 <https://github.com/spelcaster>

#include <iostream>

#include "include/Game.hpp"

//! Game constructor
Game::Game() {
    video_settings = new VideoSettings();
    audio_settings = new AudioSettings();
}

//! Game desctructor
Game::~Game() {
}

/*!
 * @brief Load settings and start game
 */
void Game::run() {
    loadSettings();
    play();
}

/*!
 * @brief Apply audio and video settings to the game
 */
void Game::loadSettings() {
    configureWindow();
}

/*!
 * @brief Update window settings
 */
void Game::configureWindow() {
    const sf::Vector2i dimension = video_settings->getWindowDimension();

    window.create(
        sf::VideoMode(dimension.x, dimension.y),
        "",
        video_settings->getWindowStyle());

    window.setFramerateLimit(video_settings->getFramerateLimit());
}

/*!
 * @brief Start the game loop
 */
void Game::play() {
    world.loadResources();
    world.createRandomWorld();

    sf::Clock clock;

    sf::Time time_fix = sf::Time::Zero;

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            handleEvent(event);
        }

        time_fix += clock.restart();

        while (time_fix > kTimePerFrame) {
            time_fix -= kTimePerFrame;

            world.update(window, kTimePerFrame);

            render();
        }
    }
}

/*!
 * @brief Handle game events
 *
 * @param[in] event An event captured in the game loop
 */
void Game::handleEvent(const sf::Event event) {
    switch (event.type) {
    case sf::Event::Closed:
        break;
    case sf::Event::KeyPressed:
        if (event.key.code == sf::Keyboard::Escape) {
            window.close();
        }

        break;
    default:
        break;
    }
}

/*!
 * @brief This method will clear the window, tell world to draw the
 *        elements and display those elements
 */
void Game::render() {
    window.clear(sf::Color(145, 167, 208));

    world.draw(window);

    window.display();
}
