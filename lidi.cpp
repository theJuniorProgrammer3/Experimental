#include <iostream>
#include <ncurses.h>

using namespace std;

void mulai() {
	initscr();
	curs_set(0);
	int h, w;
	getmaxyx(stdscr, h, w);
	int w2 = w / 2;
	mvprintw(h, w2, "█");
	int j = 0;
	for(int i = 0; i < h / 2; i++){
		mvprintw(i, w - j, "█");
		j++;
	}
	for(int i = 0; i < h / 2; i++){
		mvprintw(i + (h / 2), w2 - j, "█");
	}
	getch();
	endwin();
}

int main() {
	mulai();
	return 0;
}
