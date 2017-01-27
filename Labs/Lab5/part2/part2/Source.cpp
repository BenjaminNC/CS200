#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter = 10;
	while (counter >= 0) {
		cout << counter-- << " ";
	}
	cout << "\nDone!";
	while (true);
	return 0;
}