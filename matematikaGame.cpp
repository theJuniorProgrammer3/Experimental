#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
	int level;
	int digit;
	int ulang;
	int score = 0;
	int putaran = 0;
	char operasi[4];
	cout << "Atur level (1 = + dan -; 2 = +, -, dan ×; 3 = +, -, ×, dan ÷): ";
	cin >> level;
	if(level <= 0 | level > 3){
		cout << "Tidak valid" << endl;
		return 0;
	} else {
		if(level == 1){
			operasi[0] = '+';
			operasi[1] = '-';
			operasi[2] = '+';
			operasi[3] = '-';
		} else if(level == 2){
			operasi[0] = '+';
			operasi[1] = '-';
			operasi[2] = '*';
			operasi[3] = '*';
		} else {
			operasi[0] = '+';
			operasi[1] = '-';
			operasi[2] = '*';
			operasi[3] = '/';
		}

	}
	cout << "Atur perulangan: ";
	cin >> ulang;
	cout << "Atur digit: (maks = 5): ";
	cin >> digit;
	if(digit <= 0 & digit > 5){
		cout << "Tidak valid" << endl;
		return 0;
	}

	cout << "Permainan dimulai..." << endl;
	string rentanS;
	int rentan;
	for(int i = 0; i < digit; i++)
		rentanS.append("9");
	rentan = stoi(rentanS);

	srand(time(0));
	while(ulang != putaran){
		putaran++;
		
		int angka1 = rand() % rentan + 1;
		int angka2 = rand() % rentan + 1;
		int operasinya = rand() % 4;
		float hasil;
		float jawab;
		if(operasi[operasinya] == '+')
			hasil = static_cast<float>(angka1) + static_cast<float>(angka2);
		else if(operasi[operasinya] == '-')
			hasil = static_cast<float>(angka1) - static_cast<float>(angka2);
		else if(operasi[operasinya] == '*')
			hasil = static_cast<float>(angka1) *  static_cast<float>(angka2);
		else
			hasil = static_cast<float>(angka1) / static_cast<float>(angka2);

		cout << angka1 << " " << operasi[operasinya] << " " << angka2 << " = ";
		cin >> jawab;
		if(jawab == hasil){
			cout << "Kamu benar!" << endl;
			score++;
		}
		else 
			cout << "Salah!, " << angka1 << " " << operasi[operasinya] << " " << angka2 << " = " << hasil << endl;
	}
		
	cout << "Permainan selesai, skor: " << score << endl;
	return 0;
	}
