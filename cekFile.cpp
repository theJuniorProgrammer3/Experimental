#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string namaFile;
	cout << "Masukkan nama file (termasuk ekstensi): ";
	getline(cin, namaFile);
	ifstream file(namaFile);

	if(file.good()) {
		cout << "File " << namaFile << " ada." << endl;
	} else {
		cout << "File " << namaFile << " tidak ada." << endl;
	}
	return 0;
}
