#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void keluar(int signal) {
	if(signal == SIGINT){
		cout << "Terima kasih telah menekan Ctrl + C!" << endl;
		exit(signal);
	}
}
int main() {
	signal(SIGINT, keluar);
	while(true){
		cout << "MOHON TEKAN Ctrl + C!!!" << endl;
	}
}
