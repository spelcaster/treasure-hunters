// Copyright 2015 <https://github.com/spelcaster>

#ifndef __DCW_TERRAIN_H__
#define __DCW_TERRAIN_H__

#include <SFML/Graphics.hpp>

//! Terrain
/*!
 * The class Terrain represents one tile
 */
class Terrain: public sf::Sprite {
 private:
    /*!
     * The movement cost of the tile
     */
    float movement_cost;

 public:
    //! Terrain constructor
    Terrain();

    //! Terrain destructor
    ~Terrain();

    /*!
     * @brief Sets the value of the movement cost
     *
     * @param[in] cost The movement cost of the tile
     */
    void setMovementCost(float cost);

    /*!
     * @brief Gets the value of the movement cost
     *
     * @returns The movement cost of the tile
     */
    float getMovementCost();
};

#endif  // __DCW_TERRAIN_H__
