#include <iostream>
#include <string>
using namespace std;

int main()
{
	double charge;
	string displayString;

	cout << "What is your current battery charge? %";
	cin >> charge;
	cout << "\n";

	if (charge >= 75) {
		displayString = "[****]";
	}
	else if (charge >= 50) {
		displayString = "[*** ]";
	}
	else if (charge >= 25) {
		displayString = "[**  ]";
	}
	else {
		displayString = "[*   ]";
	}
	cout << displayString;
	while(true);
	
return		0;
}