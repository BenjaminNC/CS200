#include <iostream>
#include <string>
using namespace std;

int main()
{
	double score;
	double totalPoints;
	double ratio;
	string status;

	cout << "What was your score? ";
	cin >> score;
	cout << "\nWhat was the total points? ";
	cin >> totalPoints;
	ratio = 100 * (score / totalPoints);
	
	if (ratio >= 70.0) {
		status = "Pass";
	}
	else {
		status = "Fail";
	}
	
	cout << "Score: " << ratio << "%\t" << status << "\n";
	while (true);
	return 0;
}