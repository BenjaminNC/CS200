#include <iostream>
#include <string>
using namespace std;

int main()
{
	string choice;

	cout << "What is your favorite fruit?\n1. Apple\n2. Banana\n3. Pear\n4. Strawberry\n\n Your selection: ";
	cin >> choice;
	if (choice == "1" || choice == "2" || choice == "3" || choice == "4") {
		cout << "Good choice!\n";
	}
	else {
		cout << "Invalid choice!";
	}
	
	while (true);
return		0;
}