//Benjamin Carpenter 3/23/17
#include <string>;
#include <iostream>;
using namespace std;
int main() {
	int* myInt;
	string* myStr;
	float* myFloat;

	myInt = new int;
	myStr = new string;
	myFloat = new float;

	*myInt = 20;
	*myStr = "Ben";
	*myFloat = 199.99;

	cout << *myInt << "\t" << *myStr << "\t" << *myFloat << "\n";
	delete myInt, myStr, myFloat;

	while (true);
	return 0;
}