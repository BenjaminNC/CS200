//Benjamin Carpenter 3/2/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;

	for (int i = 0; i < arraySize; i++) {
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	for (int i = 0; i < itemCount; i++) {
		cout << "Item #" << i << " " << items[i] << ", $" << prices[i] << "\n";	}
	while (true);
	return 0;
}