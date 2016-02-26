// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_WORLD_H__
#define __DCW_WORLD_H__

#include <SFML/Graphics.hpp>
#include <vector>

#include "Player.hpp"
#include "Terrain.hpp"

class Terrain;

//! World
/*!
 * One renderer to render them all
 */
class World {
 private:
    /*!
     * The lonely player
     */
    Player player;

    /*!
     * The texture sheet
     */
    sf::Texture texture;

    /*!
     * The world tile grid
     */
    std::vector< std::vector<Terrain *> > tiles;

    /*!
     * A tile that represents a grass field
     */
    Terrain grass_terrain;

    /*!
     * A tile that represents a rock field
     */
    Terrain rock_terrain;

    /*!
     * Number of rows in the grid
     */
    int rows;

    /*!
     * Number of columns in the grid
     */
    int columns;

    /*!
     * The width padding, it's used to normalize the grid
     */
    float padding_width;

    /*!
     * The height padding, it's used to normalize the grid
     */
    float padding_height;

    /*!
     * @brief Initialize the game tiles based on grid size
     */
    void initializeWorldTiles();

 public:
    //! World constructor
    World();

    //! World destructor
    virtual ~World() {}

    /*!
     * @brief Draw the world elements in window
     *
     * @param[in] window Where the game elements will be drawn
     */
    void draw(sf::RenderWindow& window);

    /*!
     * @brief Get the tile from the grid
     *
     * @param[in] row    The grid row
     * @param[in] column The grid column
     *
     * @returns Get the tile from the given position
     */
    const Terrain& getTile(int row, int column) const;

    /*!
     * @brief Load the resources used in the world
     */
    void loadResources();

    /*!
     * @brief Create random tiles for each cell in the grid
     */
    void createRandomWorld();

    /*!
     * @brief Update game elements in the world
     *
     * @param[in] window     The game window
     * @param[in] frame_time The game clock shared with all resources
     */
    void update(sf::RenderWindow& window, sf::Time frame_time);
};

#endif  // __DCW_WORLD_H_
