#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 0;
	while(i < 100){
		string command = "echo -e \"\\e[" + to_string(i) + "mWarna ke-" + to_string(i) + "\"";
	system(command.c_str());
	i++;
	}
	return 0;
}
