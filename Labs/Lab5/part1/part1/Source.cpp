#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter = 1;
	while (counter <= 10) {
		cout << counter++ << " ";
	}
	cout << "\n Done";
	while (true);
	return 0;
}