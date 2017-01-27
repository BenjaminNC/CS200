#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double num1;
	double num2;

	cout << "x1 = ";
	cin >> num1;
	cout << "\nWhere is x2? ";
	cin >> num2;

	if (abs(num1 - num2) < 5) {
		cout << "Within 5 units from x1!\n";
	}
	else {
		cout << "\nToo far away ...\n";
	}
	while (true);
return		0;
}