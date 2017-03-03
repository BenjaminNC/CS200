//Benjamin Carpenter 3/2/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	while (itemCount < arraySize) {
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	int counter = 0;
	while (counter < itemCount) {
		cout << "Item #" << counter << " " << items[counter] << ", $" << prices[counter] << "\n";
		counter++;
	}
	while (true);
	return 0;
}