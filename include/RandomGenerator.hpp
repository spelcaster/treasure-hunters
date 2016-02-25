// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_RANDOM_GENERATOR_H__
#define __DCW_RANDOM_GENERATOR_H__

#include <random>

//! RandomGenerator
/*!
 * The class RandomGenerator is used to get random number using Mersenne
 * Twister engine
 *
 * Reference: http://www.cplusplus.com/reference/random/mt19937/
 */
class RandomGenerator {
 private:
    /*!
     * uniformly-distributed integer random number generator
     */
    std::random_device device;

    /*!
     * Mersenne Twister 19937 generator
     */
    std::mt19937 generator;

 public:
    //! Constructor for RandomGenerator
    RandomGenerator();

    /*!
     * @brief Get a random integer between 0 and last
     *
     * @param[in] last Last number in range
     *
     * @returns A random integer between 0 and last
     */
    int random(int last);

    /*!
     * @brief Get a random number between first and last
     *
     * @param[in] first First number in range
     * @param[in] last Last number in range
     *
     * @returns A random integer between first and last
     */
    int random(int first, int last);
};

#endif  // __DCW_RANDOM_GENERATOR_H__
