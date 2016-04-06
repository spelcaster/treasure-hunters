// Copyright 2015 <https://github.com/spelcaster>

#include "../include/RandomGenerator.hpp"

//! Constructor for RandomGenerator
RandomGenerator::RandomGenerator() {
    generator.seed(device());
}

/*!
 * @brief Get a random integer between 0 and last
 *
 * @param[in] last Last number in range
 *
 * @returns A random integer between 0 and last
 */
int RandomGenerator::random(int last) {
    return random(0, last);
}

/*!
 * @brief Get a random number between first and last
 *
 * @param[in] first First number in range
 * @param[in] last Last number in range
 *
 * @returns A random integer between first and last
 */
int RandomGenerator::random(int first, int last) {
    std::uniform_int_distribution<int> distribution(first, last);

    return distribution(generator);
}
