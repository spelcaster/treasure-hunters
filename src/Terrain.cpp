// Copyright 2015 <https://github.com/spelcaster>

#include "../include/Terrain.hpp"

//! Terrain constructor
Terrain::Terrain() {
}

//! Terrain destructor
Terrain::~Terrain() {
}

/*!
 * @brief Sets the value of the movement cost
 *
 * @param[in] cost The movement cost of the tile
 */
void Terrain::setMovementCost(float cost) {
    movement_cost = cost;
}

/*!
 * @brief Gets the value of the movement cost
 *
 * @returns The movement cost of the tile
 */
float Terrain::getMovementCost() {
    return movement_cost;
}
