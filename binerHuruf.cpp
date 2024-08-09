#include <ncurses.h>
#include <byteswap.h>
#include <string>
#include <iostream>

int main() {
    initscr();
    printw("Masukkan huruf: ");
    char huruf;
    getch(huruf);
    int angka = huruf;
    refresh();
    std::string biner32 = string(bswap_32(angka));
    std::string biner64 = string(bswap_32(angka));
    std::string c1 = "Huruf yang dimasukkan: " + string(1, huruf);
    std::string c2 = "Angka: " + std::to_string(angka);
    std::string c3 = "Biner 32 bit: " + biner32;
    std::string c4 = "Biner 64 bit: " + biner64;
    printw((c1 + "\n").c_str());
    printw((c2 + "\n").c_str());
    printw((c3 + "\n").c_str());
    printw((c4 + "\n").c_str());
    getch();
    endwin();
    return 0;
}

