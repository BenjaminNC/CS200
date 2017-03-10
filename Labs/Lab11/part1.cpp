//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 20;
	float f = 9.99;
	string s = "Bob";

	cout << &i << " = " << i << "\n" <<
		 &f << " = " << f << "\n" <<
		 &s << " = " << s << "\n";
	while (true);
	return 0;
}