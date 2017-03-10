//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	string students[3] = { "Ashley", "Kaidan", "Wrex" };
	string* ptrStudent;
	cout << "Enter 0, 1, or 2: ";
	int choice;
	cin >> choice;

	ptrStudent = &students[choice];

	cout << "New name: ";
	cin >> *ptrStudent;
	cout << "\n";

	for (int i = 0; i < 3; i++) {
		cout << "student " << i << " = " << students[i] << "\n";
	}
	while (true);
	return 0;
}