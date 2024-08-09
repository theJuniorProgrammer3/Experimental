#include <ncurses.h>
#include <string>

int main() {
    initscr();
    while(true){
    printw("Masukkan karakter: ");
    int angka = getch();
    char karakter = angka;
    std::string command = "\n Karakter: " + std::to_string(karakter) + ", angka: " + std::to_string(angka);
    printw(command.c_str());
    refresh();
    getch();
    clear();
    }
    endwin();
}
	
