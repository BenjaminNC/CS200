#include <iostream>
#include <string>
using namespace std;

int main()
{
	string town;
	string name;
	cout << "What is your hometown? ";
	cin >> town;
	if (town.length() > 6) {
		cout << "\nThat's a long name!";
	}
	cout << "\nWhat's your name? ";
	cin >> name;
	cout << "\nHello, " << name << " from " << town << "!\n";
	while (true);
	return 0;
}