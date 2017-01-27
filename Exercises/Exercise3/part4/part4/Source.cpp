#include <iostream>
#include <string>
using namespace std;

int main()
{
	int feet;
	while (true) {
		cout << "Enter the amount of feet: ";
		cin >> feet;
		for (int i = 0; i < (12 * feet); i++) {
			string display;
			if (i % 12 == 0) {
				cout << "|";
			}else{
				cout << "-";
			}
		}
		cout << "|\n";
	}

	return 0;
}