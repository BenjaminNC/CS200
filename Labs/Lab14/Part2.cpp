//Benjamin Carpenter 4/13/17
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string choice;
	cout << "Which word do you want to search for?";
	cin >> choice;
	cout << "What do you want to replace it with?";
	string replaceWord;
	cin >> replaceWord;
	string buffer;
	ifstream input("resulta.txt");
	ofstream output("resultb.txt");
	while (input >> buffer) {
		if (buffer == choice) {
			output << replaceWord << " ";
		}
		else {
			output << buffer << " ";
		}
	}
	input.close();
	output.close();
	return 0;
}