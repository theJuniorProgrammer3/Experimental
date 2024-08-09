#include <ncurses.h>
#include <fstream>
#include <iostream>
#include <string>
#include <cctype>

char namaF[100];
bool ncurses = false;
using namespace std;

void command() {
	initscr();
	int command = getch;
	if(command == 18) {
		printw("Dengan nama file? [Y/lainyya]");
		refresh();
		char jawab = getch();
		bool withName = false;
		if(jawab == 'Y' || jawab == 'y'){
			printw("Nama file output(maks. 100 karakter): ");
			withName = true;
			refresh();
			string namaFO;
			getstr(namaFO);
		}
			 
			
		string c;
		nama
		if(ncurses == true)
			c = "g++ -lncurses "+ string(namaF) +" -o "+ string(namaFO);
		else
			c = "g++ -lncurses "+ string(namaF) +" -o "+ string(namaFO);
		system(c.c_str());
		if(withName == true)
			system(("./"+namaFO).c_str());
		else
			system("./a.out");
		
	}
}

void lihat() {
	initscr();
	clear();
	ifstream file(string(namaF));
	string line;
	if(file.is_open()) {
		while(getline(file, line)) {
		printw(line);
		if(line.indexOf("#include <ncurses.h>") != -1)
			ncurses = true;
		}
	} else {
	printw("Gagal membaca file!, tapi anda mungkin masih masih bisa menjalankannya");
	}
	refresh();
	command();
	
}
int jumlahKata(string kata) {
int jumlahKatanya = 0;
if(kata == "") {
return jumlahKatanya;
}
else {
for(int i = 0; i < kata.length(); i++){
	if(kata[i] == ' ') {
		jumlahKatanya++;
	}
}
}
jumlahKatanya++;
return jumlahKatanya;
}

int main() {
	using namespace std;
	initscr();
	printw("Masukkan nama file: ");
	refresh();
	getstr(namaF);
	int jumlahKata = jumlahKata(string(namaF);
	if(string(namaF).indexOf(".cpp") != jumlahKata){
		namaF[string(namaF).length() + 1] = '."
		namaF[string(namaF).length() + 2] = c
		namaF[string(namaF).length() + 3] = p
		namaF[string(namaF).length() + 4] = p
	}
		
	string cmm = "vim \""+ string(namaF) + "\"";
	system(cmm.c_str());
	lihat();
	return 0;
}
