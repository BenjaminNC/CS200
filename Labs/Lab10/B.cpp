//Benjamin Carpenter 3/2/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	string names[5];
	int index = 0;
	int arraySize = 5;

	names[0] = "Xia";
	names[1] = "Shang";
	names[2] = "Zhou";
	names[3] = "Qin";
	names[4] = "Han";

	while (index < arraySize) {
		cout << names[index] << "\n";
		index++;
	}
	
	while (true);
	return 0;
}