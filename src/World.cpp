// Copyright 2015 <https://github.com/spelcaster>

#include <iostream>

#include "../include/World.hpp"
#include "../include/Constants.hpp"
#include "../include/VideoSettings.hpp"
#include "../include/RandomGenerator.hpp"
#include "../include/exception/ResourceNotFoundException.hpp"

//! World constructor
World::World() {
    VideoSettings settings;
    sf::Vector2i dimension = settings.getWindowDimension();

    int block_size = static_cast<int>(kBlockSize);

    rows = dimension.x / block_size;
    columns = dimension.y / block_size;

    padding_width = (dimension.x - (rows * block_size)) / 2;
    padding_height = (dimension.y - (columns * block_size)) / 2;
}

/*!
 * @brief Draw the world elements in window
 *
 * @param[in] window Where the game elements will be drawn
 */
void World::draw(sf::RenderWindow& window) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            window.draw(getTile(i, j));
        }
    }

    window.draw(player);
}

/*!
 * @brief Get the tile from the grid
 *
 * @param[in] row    The grid row
 * @param[in] column The grid column
 *
 * @returns Get the tile from the given position
 */
const Terrain& World::getTile(int row, int column) const {
    tiles[row][column]->setPosition(
        (row * kBlockSize) + padding_width,
        (column * kBlockSize) + padding_height);

    return *tiles[row][column];
}

/*!
 * @brief Load the resources used in the world
 */
void World::loadResources() {
    initializeWorldTiles();

    if (!texture.loadFromFile("res/texture/texture.png")) {
        throw ResourceNotFoundException;
    }

    grass_terrain.setTexture(texture);
    grass_terrain.setTextureRect(sf::IntRect(
        0 * 32,
        0 * 32,
        32,
        32));

    rock_terrain.setTexture(texture);
    rock_terrain.setTextureRect(sf::IntRect(
        1 * 32,
        0 * 32,
        32,
        32));
}

/*!
 * @brief Initialize the game tiles based on grid size
 */
void World::initializeWorldTiles() {
    // First we assign the rows
    tiles.resize(rows);

    for (int i = 0; i < rows; i++) {
        // For each row, we assign the columns
        tiles[i].resize(columns);
    }
}

/*!
 * @brief Create random tiles for each cell in the grid
 */
void World::createRandomWorld() {
    RandomGenerator generator;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if ((i == 0) || ((i + 1) == rows)) {
                tiles[i][j] = &rock_terrain;
                continue;
            } else if ((j == 0) || ((j + 1) == columns)) {
                tiles[i][j] = &rock_terrain;
                continue;
            }

            if (generator.random(10) == 0) {
                tiles[i][j] = &rock_terrain;
                continue;
            }

            tiles[i][j] = &grass_terrain;
        }
    }
}

/*!
 * @brief Update game elements in the world
 *
 * @param[in] window     The game window
 * @param[in] frame_time The game clock shared with all resources
 */
void World::update(sf::RenderWindow& window, sf::Time frame_time) {
    player.update(window, frame_time);
}
