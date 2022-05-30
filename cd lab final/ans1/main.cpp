#include <iostream>
#include <fstream>
using namespace std;


int main() {
	fstream my_file;
	my_file.open("In.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file << "In.txt";
		my_file.close();
	}
	return 0;
}
