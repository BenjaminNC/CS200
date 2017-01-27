#include <iostream>
#include <string>
using namespace std;

int main()
{
	double num1;
	double num2;
	int choice;

	cout << "Enter a: ";
	cin >> num1;
	cout << "\nEnter b: ";
	cin >> num2;
	cout << "\n\nWhat kind of operation? (1) Add, (2) Subtract, (3) Multiply, (4) Divide\nChoice: ";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << (num1 + num2);
		break;
	case 2:
		cout << (num1 - num2);
		break;
	case 3:
		cout << (num1 * num2);
		break;
	case 4:
		cout << (num1 / num2);
		break;
	default:
		cout << "\nInvalid choice\n";
	}
	while (true);
	return 0;
}