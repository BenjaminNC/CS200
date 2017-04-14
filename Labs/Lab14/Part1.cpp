//Benjamin Carpenter 4/13/17
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
struct Option {
	string title;
	int count;
};
struct Poll {
	string question;
	Option options[4];
};
int main() {
	Poll myPoll;
	myPoll.question = "What is the best food?";

	myPoll.options[0].title = "Pizza";
	myPoll.options[0].count = 0;

	myPoll.options[1].title = "Veggie Taco";
	myPoll.options[1].count = 0;

	myPoll.options[2].title = "Samosas";
	myPoll.options[2].count = 0;

	myPoll.options[3].title = "Sushi";
	myPoll.options[3].count = 0;
	bool notDone = true;
	while (notDone) {
		cout << "What is best food?\n0. Pizza\n1. Veggie Taco\n2. Samosas\n3. Sushi\n4. EXIT\n\nWhat is your selection?\n>>";
		int choice;
		cin >> choice;
		if (choice != 4) {
			myPoll.options[choice].count++;
		}
		else if(choice == 4) {
			notDone = false;
		}else{
			cout << "Invalid choice\n";
		}
	}
	ofstream output;
	output.open("results.txt");
	output << "Question\n" << myPoll.question << "\n\nRESULTS\n";
	for (int i = 0; i < 4; i++) {
		output << myPoll.options[i].title << ": " << myPoll.options[i].count << "\n";
	}
	output.close();
	return 0;
}