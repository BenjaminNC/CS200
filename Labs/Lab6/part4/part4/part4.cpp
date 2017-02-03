//Benjamin Carpenter
#include <iostream>
using namespace std;
int main() {
	float startingWage;
	float percentRaisePerYear;
	float adjustedWage;
	int yearsWorked;

	cout << "What is your starting wage? >> ";
	cin >> startingWage;
	cout << "What % of a raise do you get per year? >> %";
	cin >> percentRaisePerYear;
	cout << "How many years have you worked >> ";
	cin >> yearsWorked;
	
	for (int i = yearsWorked; i > 0; i--) {
		startingWage = (startingWage + (startingWage * (percentRaisePerYear / 100)));
	}
	cout << "Your new wage is $" << startingWage;
	while (true);
	return 0;
}