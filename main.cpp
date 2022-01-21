#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    initscr();
    noecho();
    cbreak();

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW * playerWin = newwin(yMax /2 + 5, xMax - 2, 2, 2);
    box(playerWin, 0, 0);
    curs_set(FALSE); // hide cursor

    refresh();
    wrefresh(playerWin);

    Player * p = new Player(playerWin, 1, 1, "team1");
    p->display();
    while (p->getMove() != 'q')
    {
        p->display();
        wrefresh(playerWin);
    }

    free(p);
    delwin(playerWin);
    endwin();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
