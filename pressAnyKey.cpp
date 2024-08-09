#include <ncurses.h>
//#include <signal>
#include <cstdlib>
#include <ctime>

using namespace std;

void start() {
	initscr();
	int h, w;
	getmaxyx(stdscr, h , w);
	if(w < 13){
		printw("your window width is less than 13, please enlarge it.");
	} else {
		srand(time(0));
		int randh = rand() % h;
		int w2 = w - 13;
		int randw = rand() % w2;
		mvprintw(randh, randw, "Press any key");
		getch();
		start();
	}

}

int main() {
	start();
	return 0;
}
