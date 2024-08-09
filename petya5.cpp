#include <ncurses.h>

void loading() {
	initscr();
	int i = 0;
	int percent = 0;
	while(i <= 10853){
	clear();
	printw("Repairing file system on /\n");
	printw("The type of the file system is Reiser FS\n");
	printw("One of your disks contains errors and needs to be repaired. This process may take several hours to complete. It is strongly recommended to let it complete.\n");
	printw("WARNING: DO NOT TURN OFF YOUR PC! IF YOU ABORT THIS PROCESS, YOU COULD DESTROY ALL OF YOUR DATA! PLEASE ENSURE THAT YOUR POWER CABLE IS PLUGGEDIN!\n");
	char percentc = '%';
	printw("FSCK is repairing sector %d of 10853 (%d%c)",i, percent, percentc);
	refresh();
	i++;
	percent = static_cast<float>(i) / 10853 * 100;
	napms(12);
	}

}

bool wr = true;

void deathsc() {
	initscr();
	clear();
	start_color();
	cbreak();
	noecho();
	int mh, mw;
        getmaxyx(stdscr, mh, mw);                               int h = (mh / 2) - (24 / 2);
int w = mw / 2;
nodelay(stdscr, TRUE);
while(true) {
	if(wr) {
		init_pair(1, COLOR_WHITE, COLOR_RED);
		wr = false;
	}
	else {
		init_pair(1, COLOR_RED, COLOR_WHITE);
		wr = true;
	}
	bkgd(COLOR_PAIR(1));
mvprintw(h, w - (15 / 2), "uu$$$$$$$$$$$uu");
mvprintw(h + 1, w - (21 / 2), "uu$$$$$$$$$$$$$$$$$uu");
mvprintw(h + 2, w - (23 / 2), "u$$$$$$$$$$$$$$$$$$$$$u");
mvprintw(h + 3, w - (25 / 2), "u$$$$$$$$$$$$$$$$$$$$$$$u");
mvprintw(h + 4, w - (27 / 2), "u$$$$$$$$$$$$$$$$$$$$$$$$$u");
mvprintw(h + 5, w - (27 / 2), "u$$$$$$$$$$$$$$$$$$$$$$$$$u");
mvprintw(h + 6, w - (27 / 2), "u$$$$$$~   ~$$$~   ~$$$$$$u");
mvprintw(h + 7, w - (27 / 2), "~$$$$~      u$u       $$$$~");
mvprintw(h + 8, w - (25 / 2), "$$$u       u$u       u$$$");
mvprintw(h + 9, w - (25 / 2), "$$$u      u$$$u      u$$$");
mvprintw(h + 10, w - (23 / 2), "~$$$$uu$$$   $$$uu$$$$~");
mvprintw(h + 11, w - (21 / 2), "~$$$$$$$~   ~$$$$$$$~");
mvprintw(h + 12, w - (17 / 2), "u$$$$$$$u$$$$$$$u");
mvprintw(h + 13, w - (15 / 2), "u$~$~$~$~$~$~$u");
mvprintw(h + 14, w - (36 / 2), "uuu        $$u$ $ $ $ $u$$       uuu");
mvprintw(h + 15, w - (38 / 2), "u$$$$        $$$$$u$u$u$$$       u$$$$");
mvprintw(h + 16, w - (37 / 2), "$$$$$uu      ~$$$$$$$$$~     uu$$$$$$");
mvprintw(h + 17, w - (40 / 2), "u$$$$$$$$$$$uu    ~~~~~    uuuu$$$$$$$$$");
mvprintw(h + 18, w - (41 / 2), "$$$$~~~$$$$$$$$$$uuu   uu$$$$$$$$$~~~$$$~");
mvprintw(h + 19, w - (31 / 2), "~~~      ~~$$$$$$$$$$$uu ~~$~~~");
mvprintw(h + 20, w - (20 / 2), "uuuu ~~$$$$$$$$$$uuu");
mvprintw(h + 21, w - (38 / 2), "u$$$uuu$$$$$$$$$uu ~~$$$$$$$$$$$uuu$$$");
mvprintw(h + 22, w - (39 / 2), "$$$$$$$$$$~~~~           ~~$$$$$$$$$$$~");
mvprintw(h + 23, w - (37 / 2), "~$$$$$~                      ~~$$$$~~");
mvprintw(h + 24, w - (34 / 2), "$$$~     PRESS ANY KEY!      $$$$~");
refresh();
if(getch() != ERR)
	break;
napms(125);
}
endwin();
}



int main() {
	/*initscr();
	int h, w;
	getmaxyx(initscr,h, w);*/
	loading();
	deathsc();
	return 0;
}
