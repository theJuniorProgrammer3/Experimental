#include <iostream>
#include <ncurses.h>

using namespace std;

void mulai() {
	initscr();
	clear();
	mvprintw(5, 2,"Teks dengan ncurses bisa dipindah-pindah (press any key to continue)");
	refresh();
	getch();
	clear();
	printw("Ketika keluar, tampilan akan kembali...");
	refresh();
	getch();
	clear();
	printw("Itu saja yang saya tahu :v (press any key to exit)");
	getch();
	endwin();

}

int main() {
	initscr();
	printw("Halo!!! apakah anda siap mencoba ncurses??? [Y/N]\n");
	refresh();
	char jawab;
	jawab = getch();
	if(jawab == 'Y' || jawab == 'y'){
		mulai();
	} else {
		clear();
		printw("Baiklah (press any key)");
		refresh();
		getch();
		endwin();
	}
	return 0;
}
