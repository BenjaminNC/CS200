//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	string array[4] = { "JCCC", "UMKC", "KU", "MS&T" };
	int arraySize = 4;
	cout << "Array address: " << array << "\n";
	for (int i = 0; i < arraySize; i++) {
		cout << "Item " << i << " address: " << &array[i] << "\tvalue: " << array[i] << "\n";
	}
	while (true);
	return 0;
}