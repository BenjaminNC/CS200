#include <iostream>;
#include <string>;
using namespace std;
//no because a and A are in the same spot in the alphabet
//This occurs because the asc11 table assigns each letter to a number. Capital letters have a smaller number than lower case letters. 
int main() {
	char letter1;
	char letter2;
	
	//get info
	cout << "Please enter two letters. <letter1> <letter2> ";
	cin >> letter1 >> letter2;

	if (letter1 < letter2) {
		cout << "first letter comes first\n";
	}else{
		cout << "second letter comes first.\n";
	}
	while (true) {}
	return 0;
}