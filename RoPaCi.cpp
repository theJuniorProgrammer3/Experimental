#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string nama(char nama);
string Menang(char p1, char p2){
	if(p1 == p2){
		return "draw";
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
	char pilih;
	cout << "Choise: [R]ock [P]aper or  [S]cissors?";
	cin >> pilih;
	pilih = toupper(pilih);
	if(pilih != 'R' && pilih != 'P' && pilih != 'S'){
		cout << "Tidak Valid!" << endl;
		ply1()
	}
	char pilihB2[] = {'R', 'S', 'P', 'R', 'S', 'P', 'R', 'S', 'P'};
	int panjang = sizeof(pilihB2) / sizeof(pilihB2[0]);
	char pilihB = pilihB2[rand() % panjang];
	string namaP = nama(pilih);
	string namaPB = nama(pilihB);
	system("clear");
	cout << "Human: " << namaP << endl;
	cout << "Computer: ";
	system("sleep 3");
	cout << namaPB << endl;
	string siapaMenang = Menang(pilih, pilihB);
	if(siapaMenang == "p1")
		siapaMenang = "Human";
	else if(siapaMenang == "p2")
		siapaMenang = "Computer";
	if(siapaMenang == "draw")
		cout << "draw!" << endl;
	else
	cout << "The winner is: " << siapaMenang << "!" << endl;

	

}
void ply2() {
	char p1;
	char p2;
	cout << "Player 1: Choise: [R]ock [P]aper or  [S]cissors?";
	cin >> p1;
	p1 = toupper(p1);
	system("clear");
	cout << "Player 2: Choise: [R]ock [P]aper or  [S]cissors?";
	cin >> p2;
	p2 = toupper(p2);
	string namaP1 = nama(p1);
	string namaP2 = nama(p2);
	system("clear");
	cout << "Player 1: ";
	system("sleep 3");
	cout << namaP1 << endl;
	cout << "Player 2: ";
	system("sleep 3");
	cout << namaP2 << endl;
	string siapaMenang = Menang(p1, p2);
	if(siapaMenang == "p1")                                                                         siapaMenang = "Player 1";
	else if(siapaMenang == "p2")                                                                    siapaMenang = "Pemain 2";
        if(siapaMenang == "Seri")
                cout << "Seri!" << endl;                                                        else                                                                                    cout << "Pemenangnya adalah: " << siapaMenang << "!" << endl;
	

}
void ply0() {
	char pilihB[] = {'B', 'G', 'K', 'B', 'G', 'K', 'B', 'G', 'K'};
	int panjang = sizeof(pilihB) / sizeof(pilihB[0]);
	char b1 = pilihB[rand() % panjang];
	char b2 = pilihB[rand() % panjang];
	string namaB1 = nama(b1);
	string namaB2 = nama(b2);
	cout << "Komputer 1: ";
	system("sleep 3");
	cout << namaB1 << endl;
	cout << "Komputer 2: ";
	system("sleep 3");
	cout << namaB2 << endl;
	string siapaMenang = Menang(b1, b2);
	if(siapaMenang == "p1")                                                                         siapaMenang = "Komputer 1";
        else if(siapaMenang == "p2")                                                                    siapaMenang = "Komputer 2";
	if(siapaMenang == "Seri")                                                                       cout << "Seri!" << endl;
	else                                                                                    cout << "Pemenangnya adalah: " << siapaMenang << "!" << endl;


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
	return 0;
}
