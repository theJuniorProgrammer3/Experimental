#include <ncurses.h>
#include <cstring>

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
	napms(6);
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
mvprintw(h + 24, w - (35 / 2), "$$$~     PRESS ANY KEY!      $$$$~");
refresh();
if(getch() != ERR)
	break;
napms(125);
}
endwin();
}

void purchase() {
	initscr();
	nocbreak();
	nodelay(stdscr, FALSE);
	scrollok(stdscr, TRUE);
	echo();
	clear();
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_RED);
	bkgd(COLOR_PAIR(1));
	int h, w;
	getmaxyx(stdscr, h, w);
	printw("You became victim of the PTYUX RANSOMWARE!\n");
	for(int i = 0; i < w; i++){
		printw("█");
	}
	printw("\n");
	printw("The harddisks of your computer have been encrypted with an military grade encryption algorithm. There is no way to restore your data without a special key. You can purchase this key on the darknet page shown in step 2.\n");
	printw("To purchase your key and restore your data, please follow these three easy steps:\n");
	printw("1. Download the Tor Browser at \"https://www.torproject.org/\". If you need help, please google for \"access onion page\".\n");
	printw("2. Visit one of the following pages with the Tor Browser:\n");
	printw("http://ptyux37h5tbhyuki.onion/7FdkQs\n");
	printw("http://ptyux5koahtsf7sv.onion/7FdkQs\n");
	printw("3. Enter your personal decryption code there:\n");
	printw("826S81M-CMrGLC-ST2vmJ-S7Ytv6-FydUyS-JuiFf1-e7zKFB-x6j8iS-cFooyJ-kCWRSD-SCs1zF-Xezz-prksv-y5uU3D-JQpZ1N\n");
	printw("If you already purchased your key, please enter it below.\n");
	char input[100];
	printw("Key: ");
	getstr(input);	
	while(strcmp(input, "PLEASE_QUIT") != 0){
		printw("\n");
		printw("Incorrect key! Please try again.\n");
		printw("Key: ");
		getstr(input);
	}
	printw("Correct key! Now you can exit.");
	napms(2000);
	endwin();


}



int main() {
	loading();
	deathsc();
	purchase();
	return 0;
}
