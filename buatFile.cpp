#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string isiFile;
	string namaFile;
	cout << "Masukkan nama file (termasuk ekstensi): ";
	getline(cin, namaFile);
	cout << "Masukkan isi file (satu baris): ";
	getline(cin, isiFile);
	
	ofstream file(namaFile);

	if(file.is_open()) {
		file << isiFile;
		file.close();
		cout << "Berhasil membuat file" << endl;
	}
	else {
		cout << "Gagal membuat file" << endl;
	}
	return 0;
}
