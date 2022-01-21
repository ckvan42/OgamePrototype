//
// Created by Giwoun Bae on 2022-01-20.
//

#include "Player.h"

#include <utility>
#include <cstring>

Player::Player(WINDOW *win, int y, int x, string team)
{
    cur_win = win;
    yLoc = y;
    xLoc = x;
    getmaxyx(win, yMax, xMax);
    keypad(cur_win, true);
    this->team = std::move(team);
    strcpy(character, "/O\\");
}

void Player::mv_up()
{
    clearCharacterPath();
    yLoc--;
    strcpy(character, "/O\\");
    if (yLoc < 1)
    {
        yLoc = 1;
    }
}

void Player::mv_down()
{
    clearCharacterPath();
    yLoc++;
    strcpy(character, "\\0/");
    if (yLoc > (yMax - 2))
    {
        yLoc = (yMax - 2);
    }
}

void Player::mv_left()
{
    clearCharacterPath();
    xLoc--;
    strcpy(character, "<0|");
    if (xLoc < 1)
    {
        xLoc = 1;
    }
}

void Player::mv_right()
{
    clearCharacterPath();
    xLoc++;
    strcpy(character, "|0>");
    if (xLoc > (xMax - 2))
    {
        xLoc = (xMax - 2);
    }
}

int Player::getMove() {
    int choice = wgetch(cur_win);
    switch (choice)
    {
        case KEY_UP:
            mv_up();
            break;
        case KEY_DOWN:
            mv_down();
            break;
        case KEY_LEFT:
            mv_left();
            break;
        case KEY_RIGHT:
            mv_right();
            break;
        default:
            break;
    }
    return choice;
}

void Player::display()
{
    mvwprintw(cur_win, yLoc, xLoc, character);
}

void Player::clearCharacterPath() {
    mvwprintw(cur_win, yLoc, xLoc, "    ");
}
