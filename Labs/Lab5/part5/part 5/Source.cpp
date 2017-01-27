#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;
	cout << "Please enter a number between 0 and 5: ";
	cin >> choice;
	while (choice <= 0 || choice >= 5) {
		cout << "\nInvalid entry. Try again: ";
		cin >> choice;
	}
	cout << "Thank you.";
	while (true);
	return 0;
}