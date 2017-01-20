#include <iostream>;
#include <string>;
using namespace std;
//yes
int main() {
	bool isTallEnoughForRide;
	float feet;

	//get info
	cout << "What is your height? ";
	cin >> feet;
	cout << "\n";

	isTallEnoughForRide = (feet > 3);
	if (isTallEnoughForRide) {
		cout << "Permitted to ride the roller coaster.\n";
	}
	else {
		cout << "Too short to ride the roller coaster.\n";
	}

	while		(true) {}
	return 0;
}