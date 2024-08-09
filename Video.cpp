#include <iostream>
#include <ncurses.h>

using namespace std;

int i = 0;

int main() {
	initscr();
	printw("Video tangga akan dimulai...");
	refresh();
	getch();
	clear();
	while(i < 20){
		mvprintw(i, i,"#");
		refresh();
		napms(500);
		i++;
		clear();
	}
	printw("Selesai!");
	refresh();
	getch();
	endwin();
	return 0;
}
