//
// Created by Giwoun Bae on 2022-01-27.
//

#ifndef OGAMEPROTOTYPE1_MAP_HPP
#define OGAMEPROTOTYPE1_MAP_HPP
#include <vector>

using namespace std;

class Walls;

/**
 * This map class has random size walls.
 */
class Map
{
    /**
     * List of walls
     */
    vector<Walls> walls;
    //display_map();
    //or WINDOW* create_map(); // This can create the master window.

};

/**
 * Walls are inside the Map. This is random size wall the player cannot penetrate.
 * Units of square.
 */
class Walls
{
    /**
     * position of the left bottom corner;
     */
    int pos_x, pos_y;

    /**
     * dimenstions
     */
    int height, width;

    /**
     * should not exceed these values.
     */
    int max_x, max_y;

    /*
     * the ASCII character to fill the Walls with.
     * Later we can think about giving it different cursor for mountains, water.
     */
    char cursor;

    /**
     * displaying?? Shoud displaying be part of this class?? Nope. Map or one above will take care of the actual displaying.
     */
    //fill_wall();

};


#endif //OGAMEPROTOTYPE1_MAP_HPP
