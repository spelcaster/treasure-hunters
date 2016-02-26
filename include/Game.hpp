// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_GAME_H__
#define __DCW_GAME_H__

#include <SFML/Graphics.hpp>
#include "VideoSettings.hpp"
#include "AudioSettings.hpp"
#include "World.hpp"

const sf::Time kTimePerFrame = sf::seconds(1.f / 60.f); //0,016666667

//! Game
/*!
 * The class Game will draw the world
 */
class Game {
 private:
    /*!
     * Draw game elements
     */
    World world;

    /*!
     * Configures the game video settings
     */
    VideoSettings* video_settings;

    /*!
     * Configures the game sound volume
     */
    AudioSettings* audio_settings;

    /*!
     * Where the game elements will be drawn
     */
    sf::RenderWindow window;

    /*!
     * @brief Apply audio and video settings to the game
     */
    void loadSettings();

    /*!
     * @brief Update window settings
     */
    void configureWindow();

 public:
    //! Game constructor
    Game();

    //! Game descructor
    ~Game();

    /*!
     * @brief Load settings and start game
     */
    void run();

    /*!
     * @brief Start the game loop
     */
    void play();

    /*!
     * @brief Handle game events
     *
     * @param[in] event An event captured in the game loop
     */
    void handleEvent(const sf::Event event);

    /*!
     * @brief This method will clear the window, tell world to draw the
     *        elements and display those elements
     */
    void render();
};

#endif  // __DCW_GAME_H__
