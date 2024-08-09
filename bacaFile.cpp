#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string namaFile;
	cout << "Masukkan nama file (termasuk ekstensi): ";
	cin >> namaFile;
    ifstream file(namaFile); // Membuka file
    string line;

    if (file.is_open()) {
        while (getline(file, line)) { // Membaca setiap baris dari file
            cout << line << endl; // Menampilkan baris yang dibaca
        }
        file.close(); // Menutup file setelah selesai membaca
    } else {
        cout << "Gagal membuka file." << endl;
    }

    return 0;
}

