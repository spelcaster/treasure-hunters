// Copyright 2015 <https://github.com/spelcaster>

#include "include/AudioSettings.hpp"

//! AudioSettings constructor
AudioSettings::AudioSettings() {
    fx_volume = 100;
    music_volume = 100;
    environment_volume = 100;
}

//! AudioSettings destructor
AudioSettings::~AudioSettings() {
}

/*!
 * @brief Get the sound effects volume
 *
 * @returns The sound effects volume
 */
const int AudioSettings::getFxVolume() {
    return fx_volume;
}

/*!
 * @brief Set the sound effects volume
 *
 * @param[in] value The new sound effects volume
 */
void AudioSettings::setFxVolume(int value) {
    fx_volume = value;
}

/*!
 * @brief Get the music volume
 *
 * @returns The music volume
 */
const int AudioSettings::getMusicVolume() {
    return music_volume;
}

/*!
 * @brief Get the music volume
 *
 * @param[in] value The new music volume
 */
void AudioSettings::setMusicVolume(int value) {
    music_volume = value;
}

/*!
 * @brief Get the environment sounds volume
 *
 * @returns The environment souns volume
 */
const int AudioSettings::getEnvironmentVolume() {
    return environment_volume;
}

/*!
 * @brief Set the environment sounds volume
 *
 * @param[in] value The new environment sounds volume
 */
void AudioSettings::setEnvironmentVolume(int value) {
    environment_volume = value;
}
