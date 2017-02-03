//Benjamin Carpenter
#include <iostream>
using namespace std;

// Declare function here
float AddTax(float dollar);
int main()
{
	cout << "Price: $" << 9.99 << " \t with tax: $" << AddTax(9.99) << endl;
	cout << "Price: $" << 19.95 << " \t with tax: $" << AddTax(19.95) << endl;
	cout << "Price: $" << 10.00 << " \t with tax: $" << AddTax(10.00) << endl;
	while (true);
	return 0;
}
float AddTax(float dollar) {
	return (dollar + (dollar * 0.12));
}