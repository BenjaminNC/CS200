//Benjamin Carpenter 3/9/17
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble? ";
	char choice;
	cin >> choice;
	if(choice == 'i'){
		int i;
		int* iptr = &i;
		cout << "Integer size: " << sizeof(i) << ", address: " << iptr << "\n";
	}else if(choice == 'f') {
		float f;
		float* fptr = &f;
		cout << "Float size: " << sizeof(f) << ", address: " << fptr << "\n";
	}else if (choice == 'b'){
		bool b;
		bool* bptr = &b;
		cout << "Integer size: " << sizeof(b) << ", address: " << bptr << "\n";
	}else if (choice == 'd'){
		double d;
		double* dptr = &d;
		cout << "Double size: " << sizeof(d) << ", address: " << dptr << "\n";
	}
	else {
		cout << "invalid choice\n";
	}
	while (true);
	return 0;
}