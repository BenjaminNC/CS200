#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter = 0;
	while (counter <= 20) {
		cout << counter << " ";
		counter += 5;
	}
	cout << "\nDone!";
	while (true);
	return 0;
}