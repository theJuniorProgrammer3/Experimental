#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	cout << "Jumlah argumen: " << argc << endl;
	for(int i = 0; i < argc; i++) {
		cout << "Argumen " << i << ": " << argv[i] << endl;
	}
	return 0;
}
