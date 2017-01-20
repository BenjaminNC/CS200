#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
	// Variable declarations
	float width;
	float length;
	float area;
	float perimeter;
	int numberOfRooms = 2;	//number of rooms to calculate
	int roomNumber = 1;

	//Output header
	cout << "ROOM CALCULATOR\n";
	while (numberOfRooms > 0) {
		//Output room number
		cout << "\nRoom " << roomNumber << "\n\n";

		// Get user input:
		cout << "Enter the width: ";        // text output
		cin >> width;                       // input from the user

		cout << "Enter the length: ";
		cin >> length;

		area = width * length;              // assignment statement
		perimeter = ((2 * width) + (2 * length)); //calculate perimeter
										// Display results:
		cout << endl;                       // empty line
		cout << "Area: " << area << endl;
		cout << "Perimeter: " << perimeter << "\n";
		numberOfRooms--;
		roomNumber++;
	}
	while (true);
	return 0;           // end of program
}
