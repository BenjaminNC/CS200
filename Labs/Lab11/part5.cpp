//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main(){
	float priceHamburger = 6.99f;
	float priceFries = 2.99f;
	float priceSalad = 8.99f;
	float defaultPrice = 0.00f;

	float* ptrPrice;

	cout << "[h]amburger, [f]ries, or [s]alad? ";
	char choice;
	cin >> choice;
	switch (choice) {
	case 'h':
		ptrPrice = &priceHamburger;
		break;
	case 'f':
		ptrPrice = &priceFries;
		break;
	case 's':
		ptrPrice = &priceSalad;
		break;
	default:
		ptrPrice = &defaultPrice;
	}


	float taxAmt = *ptrPrice * 0.065f;
	cout << "Original price: $" << *ptrPrice << "\nWith tax price: $" << (*ptrPrice + taxAmt) << "\n";
	while (true);
	return 0;
}