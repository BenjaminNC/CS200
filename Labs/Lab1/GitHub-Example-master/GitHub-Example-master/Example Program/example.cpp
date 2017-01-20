#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declarations
    string firstName, color;
	string adjective;

    // Output and input
    cout << "HELLO, WHATE IS YOUR NAME? ";
    cin >> firstName;

	cout << "ENTER AN ADJECTIVE: ";
	cin >> adjective;

    cout << "WHAT IS YOUR FAVORITE COLOR? ";
    cin >> color;

    cout << endl;
    cout << "SO CAN I CALL YOU " << adjective << color << " " << firstName << "?" << endl;

    return 0;
}
