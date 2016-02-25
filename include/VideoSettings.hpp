// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_VIDEO_SETTINGS_H__
#define __DCW_VIDEO_SETTINGS_H__

#include <SFML/Graphics.hpp>

//! VideoSettings
/*!
 * The class VideoSettings is used to configure a bunch of
 * video features
 */
class VideoSettings {
 private:
    /*!
     * The window dimension
     */
    sf::Vector2i window_dimension;

    /*!
     * The window position
     */
    sf::Vector2i window_position;

    /*!
     * The window style
     */
    unsigned long window_style;

    /*!
     * The framerate limit
     */
    int framerate_limit;

 public:
    //! VideoSettings constructor
    VideoSettings();

    //! VideoSettings destructor
    ~VideoSettings();

    /*!
     * @brief Get the window dimension
     *
     * @returns The configure window dimension
     */
    const sf::Vector2i getWindowDimension();

    /*!
     * @brief Set the window dimension
     *
     * @param[in] width  The window width dimension
     * @param[in] height The window height dimension
     */
    void setWindowDimension(int width, int height);

    /*!
     * @brief Get the window style
     *
     * @see sf::Style
     *
     * @returns The window style code
     */
    const unsigned long getWindowStyle();

    /*!
     * @brief Set the window style
     *
     * @param[in] style Window style code
     */
    void setWindowStyle(unsigned long style);

    /*!
     * @brief Get the window position, where window will start to be rendered
     *
     * @returns The window position
     */
    const sf::Vector2i getWindowPosition();

    /*!
     * @brief Get the window framerate limit
     *
     * @returns The window framerate limit
     */
    const int getFramerateLimit();
};

#endif  // __DCW_VIDEO_SETTINGS_H__
