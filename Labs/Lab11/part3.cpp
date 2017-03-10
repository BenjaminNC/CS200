//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 20;
	float f = 9.99;
	string s = "Bob";

	int* iptr = &i;
	float* fptr = &f;
	string* sptr = &s;

	cout << iptr << " = " << i << "\n" <<
		fptr << " = " << f << "\n" <<
		sptr << " = " << s << "\n";
	while (true);
	return 0;
}