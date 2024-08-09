#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>
#include <unistd.h>

using namespace std;

string nama(char nama);
string Menang(char p1, char p2){
	if(p1 == p2){
		return "Seri";
	} else if(p1 == 'B' && p2 == 'K'){
		return "p2";
	} else if(p1 == 'B' && p2 == 'G'){
		return "p1";
	} else if(p1 == 'G' && p2 == 'B'){
		return "p2";
	} else if(p1 == 'G' && p2 == 'K'){
		return "p1";
	} else if(p1 == 'K' && p2 == 'B'){
		return "p1";
	} else if(p1 == 'K' && p2 == 'G'){
		return "p2";
	}
}
void ply1() {
	initscr();
	char pilih;
	refresh();
	cout << "Pilih: [B]atu [G]unting [K]ertas?: ";
	cin >> pilih;
	pilih = toupper(pilih);
	if(pilih != 'B' && pilih != 'G' && pilih != 'K'){
		cout << "Tidak Valid!" << endl;
		ply1();
	}
	char pilihB2[] = {'B', 'G', 'K', 'B', 'G', 'K', 'B', 'G', 'K'};
	int panjang = sizeof(pilihB2) / sizeof(pilihB2[0]);
	char pilihB = pilihB2[rand() % panjang];
	string namaP = nama(pilih);
	string namaPB = nama(pilihB);
	refresh();
	cout << "Manusia: " << namaP << endl;
	cout << "Komputer: ";
	sleep(3);
	
	cout << namaPB << endl;
	string siapaMenang = Menang(pilih, pilihB);
	if(siapaMenang == "p1")
		siapaMenang = "Manusia";
	else if(siapaMenang == "p2")
		siapaMenang = "Komputer";
	if(siapaMenang == "Seri")
		cout << "Seri!" << endl;
	else
	cout << "Pemenangnya adalah: " << siapaMenang << "!" << endl;
	endwin();

	

}
void ply2() {
	initscr();
	char p1;
	char p2;
	refresh();
	cout << "Pemain 1: Pilih: [B]atu [G]unting [K]ertas?: ";
	cin >> p1;
	p1 = toupper(p1);
	refresh();
	cout << "Pemain 2: Pilih: [B]atu [G]unting [K]ertas?: ";
	cin >> p2;
	p2 = toupper(p2);
	string namaP1 = nama(p1);
	string namaP2 = nama(p2);
	refresh();
	cout << "Pemain 1: ";
	sleep(3);
	cout << namaP1 << endl;
	cout << "Pemain 2: ";
	sleep(3);
	cout << namaP2 << endl;
	string siapaMenang = Menang(p1, p2);
	if(siapaMenang == "p1")                                                                         siapaMenang = "Pemain 1";
	else if(siapaMenang == "p2")                                                                    siapaMenang = "Pemain 2";
        if(siapaMenang == "Seri")
                cout << "Seri!" << endl;                                                        else                                                                                    cout << "Pemenangnya adalah: " << siapaMenang << "!" << endl;
	endwin();
	

}
void ply0() {
	initscr();
	char pilihB[] = {'B', 'G', 'K', 'B', 'G', 'K', 'B', 'G', 'K'};
	int panjang = sizeof(pilihB) / sizeof(pilihB[0]);
	char b1 = pilihB[rand() % panjang];
	char b2 = pilihB[rand() % panjang];
	string namaB1 = nama(b1);
	string namaB2 = nama(b2);
	refresh();
	cout << "Komputer 1: ";
	sleep(3);
	cout << namaB1 << endl;
	cout << "Komputer 2: ";
	sleep(3);
	cout << namaB2 << endl;
	string siapaMenang = Menang(b1, b2);
	if(siapaMenang == "p1")                                                                         siapaMenang = "Komputer 1";
        else if(siapaMenang == "p2")                                                                    siapaMenang = "Komputer 2";
	if(siapaMenang == "Seri")                                                                       cout << "Seri!" << endl;
	else                                                                                    cout << "Pemenangnya adalah: " << siapaMenang << "!" << endl;
	endwin();


}
string nama(char nama) {
	switch(nama){
		case 'B':
			return "Batu";
			break;
		case 'G':
			return "Gunting";
			break;
		case 'K':
			return "Kertas";
			break;
	}
}

int main() {
	initscr();
	srand(time(0));
	int player;
	system("clear");
	cout << "Jumlah pemain: ";
	cin >> player;
	if(player == 1){
		cout << "Manusia vs Komputer" << endl;
		ply1();
	}
	else if(player == 2){
		cout << "Manusia vs Manusia" << endl;
		ply2();
	}
	else if(player == 0){
		cout << "Komputer vs komputer (anda menonton)" << endl;
		ply0();
	}
	else {
		cout << "Tidak valid!" << endl;
	}
	endwin();
	return 0;
}
