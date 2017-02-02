//Benjamin Carpenter
#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	//TranslateEenglish into Hindi and return.
	if (english == "cat") {
		return "billee";
	}
	else if (english == "dog") {
		return "kutta";
	}else if(english == "frog"){
		return "medhak";
	}
	else {
		return "khargosh";
	}
}

string GetEnglish(string hindi)
{

	//Translate Hindi into English and return.
	if (hindi == "billee") {
		return "cat";
	}
	else if (hindi == "kutta") {
		return "dog";
	}
	else if (hindi == "medhak") {
		return "frog";
	}
	else {
		return "rabbit";
	}
}

// Menu functions

void DisplayMenu()
{
	//Display menu.
	cout << "1. English to Hindi\n2. Hindi to English\n3. Quit\n";
}

void EnglishToHindi()
{
	string input;
	cout << "English: ";
	cin >> input;
	cout << "Hindi translation: " << GetHindi(input) << "\n\n\n";
}

void HindiToEnglish()
{
	string input;
	cout << "Hindi: ";
	cin >> input;
	cout << "English translation: " << GetEnglish(input) << "\n\n\n";
}

int main()
{
	int choice;
	
	bool done = false;
	while (!done) {
		DisplayMenu();
		cin >> choice;
		
		
		switch (choice) {
		case 1:
			EnglishToHindi();
			break;
		case 2:
			HindiToEnglish();
			break;
		case 3:
			done = true;
			break;
		}
	}
	return 0;
}