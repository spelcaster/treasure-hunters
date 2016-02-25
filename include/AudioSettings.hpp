// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_AUDIO_SETTINGS_H__
#define __DCW_AUDIO_SETTINGS_H__

//! AudioSettings
/*!
 *
 */
class AudioSettings {
 private:
    /*!
     * The sound effects volume (0-100)
     */
    int fx_volume;

    /*!
     * The game music volume (0-100)
     */
    int music_volume;

    /*!
     * The environment sounds volume (0-100)
     */
    int environment_volume;

 public:
    //! AudioSettings constructor
    AudioSettings();

    //! AudioSettings destructor
    ~AudioSettings();

    /*!
     * @brief Get the sound effects volume
     *
     * @returns The sound effects volume
     */
    const int getFxVolume();

    /*!
     * @brief Set the sound effects volume
     *
     * @param[in] value The new sound effects volume
     */
    void setFxVolume(int value);

    /*!
     * @brief Get the music volume
     *
     * @returns The music volume
     */
    const int getMusicVolume();

    /*!
     * @brief Get the music volume
     *
     * @param[in] value The new music volume
     */
    void setMusicVolume(int value);

    /*!
     * @brief Get the environment sounds volume
     *
     * @returns The environment souns volume
     */
    const int getEnvironmentVolume();

    /*!
     * @brief Set the environment sounds volume
     *
     * @param[in] value The new environment sounds volume
     */
    void setEnvironmentVolume(int value);
};

#endif  // __DCW_AUDIO_SETTINGS_H__
