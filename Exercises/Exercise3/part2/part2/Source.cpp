#include <iostream>
#include <string>
using namespace std;

int main()
{
	string output;
	int input;

	while (true) {
		do {
			cout << "Enter a number between 1 and 5: ";
			cin >> input;
			if (input < 1 || input > 5) {
				cout << "Invalid number!\n";
			}

		} while (input < 1 || input > 5);

		switch (input) {
		case 1:
			output = "I";
			break;
		case 2:
			output = "II";
			break;
		case 3:
			output = "III";
			break;
		case 4:
			output = "IV";
			break;
		case 5:
			output = "V";
			break;
		}
		cout << "Roman numeral is: " << output << "\n";
	}


	return 0;
}