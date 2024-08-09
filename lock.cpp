#include <iostream>

using namespace std;

int i = 10 ;
int counter = 0;
bool neverWrong = false;

void lock() {
	string sandi = "halo";
	string hint1 = "Semua huruf kecil.";
	string hint2 = "Kata menyapa";
	string sandij;
	system("clear");
	if(neverWrong){
		cout << "Sandi salah!, coba lagi." << endl;
	}
	if(counter >= 5){
		cout << "Hint1: " << hint1 << endl;
	}
	if(counter >= 8){
		cout << "Hint2: " << hint2 << endl;
	}
	cout << "Time remaining: " << i << endl;
	cout << "Masukkan kata sandi: ";
	cin >> sandij;
	if(sandij != sandi && i > 0){
		 neverWrong = true;
		counter++;
		i--;
		lock();
	} else if(sandij == sandi){
		        system("clear");
	} else if(i == 0){
		system("pkill -1 /data/data/com.termux/files/usr/bin/bash");
	}

}

int main() {
	lock();
	return 0;
}
