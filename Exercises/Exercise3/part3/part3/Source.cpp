#include <iostream>
#include <string>
using namespace std;

int main() {
	int sum = 0;
	int num = 0;
	bool isDone = false;
	while (!isDone) {
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
		cout << "\nType (Q) to quit, or (A) to enter another.\nChoice: ";
		char choice;
		cin >> choice;
		if (choice == 'q' || choice == 'Q') {
			isDone = true;
		}
	}
	cout << "The sum is " << sum;
	while (true);
	return 0;
}