#include <ncurses.h>
#include <string>

int main() {
    initscr();
    printw("Masukkan karakter: ");
    char karakter = getch();
    int angka = karakter;
    std::string command = "\n Karakter: " + std::to_string(karakter) + ", angka: " + std::to_string(angka);
    printw(command.c_str());
    getch();
    endwin();
}
	
