#include <iostream>
#include <string>
using namespace std;

int main()
{
	int secretNum = 10;
	int guess = 0;
	do {
		cout << "Enter your guess: ";
		cin >> guess;
		cout << "\n";
		if (guess > secretNum) {
			cout << "Too high!\n";
		}
		else if (guess < secretNum) {
			cout << "Too low!\n";
		}
		else {
			cout << "You win!";
		}
	}			while (secretNum != guess);
	while (true);
	return 0;
}