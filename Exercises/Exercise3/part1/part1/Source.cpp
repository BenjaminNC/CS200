#include <iostream>
#include <string>
using namespace std;

int main()
{
	double price;
	double tax;
	string city;
	
	cout << "What is the item price? ";
	cin >> price;
	cout << "\nWhat city? ";
	cin >> city;
	
	if (city == "Olathe") {
		tax = 0.065;
	}
	else if (city == "OverlandPark") {
		tax = 0.0935;
	}else if(city == "Raytown"){
		tax = 0.08225;
	}
	else if (city == "Independence") {
		tax = 0.07725;
	}
	else {
		tax = 0.08;
	}

	cout << "\nTotal price is: $" << (price + (price * tax));

	while		(true);
	return 0;
}