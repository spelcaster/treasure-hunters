// Copyright 2015 <https://github.com/spelcaster>

#include "include/VideoSettings.hpp"

//! VideoSettings constructor
VideoSettings::VideoSettings() :
    window_dimension(1920, 1080),
    window_position(0, 0) {
    window_style = sf::Style::Fullscreen;
    framerate_limit = 60;
}

//! VideoSettings destructor
VideoSettings::~VideoSettings() {
}

/*!
 * @brief Get the window dimension
 *
 * @returns The configure window dimension
 */
const sf::Vector2i VideoSettings::getWindowDimension() {
    return window_dimension;
}

/*!
 * @brief Set the window dimension
 *
 * @param[in] width  The window width dimension
 * @param[in] height The window height dimension
 */
void VideoSettings::setWindowDimension(int width, int height) {
    window_dimension.x = width;
    window_dimension.y = height;
}

/*!
 * @brief Get the window style
 *
 * @see sf::Style
 *
 * @returns The window style code
 */
const unsigned long VideoSettings::getWindowStyle() {
    return window_style;
}

/*!
 * @brief Set the window style
 *
 * @param[in] style Window style code
 */
void VideoSettings::setWindowStyle(unsigned long style) {
    window_style = style;
}

/*!
 * @brief Get the window position, where window will start to be rendered
 *
 * @returns The window position
 */
const sf::Vector2i  VideoSettings::getWindowPosition() {
    return window_position;
}

/*!
 * @brief Get the window framerate limit
 *
 * @returns The window framerate limit
 */
const int VideoSettings::getFramerateLimit() {
    return framerate_limit;
}
