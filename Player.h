//
// Created by Giwoun Bae on 2022-01-20.
//
#ifndef OGAMEPROTOTYPE1_PLAYER_H
#define OGAMEPROTOTYPE1_PLAYER_H


#include <ncurses.h>
#include <string>

using namespace std;

class Player {
    int xLoc, yLoc, xMax, yMax;
    string team;
    WINDOW * cur_win;
    char character[4] = {0};
    void clearCharacterPath();

public:
    Player(WINDOW *win, int y, int x,  string team);

    void mv_up();
    void mv_down();
    void mv_left();
    void mv_right();
    int getMove();
    void display();
};


#endif //OGAMEPROTOTYPE1_PLAYER_H
