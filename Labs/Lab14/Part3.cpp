//Benjamin Carpenter 4/13/17
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct PoemMaker {
	string nouns[10];
	string adjectives[10];
	void LoadNouns(string filename) {
		ifstream input(filename);
		for (int i = 0; i < 10; i++) {
			input >> nouns[i];
		}
	}
	void LoadAdjectives(string filename) {
		ifstream input(filename);
		for (int i = 0; i < 10; i++) {
			input >> adjectives[i];
		}
	}
	string GetRandomNoun() {
		return nouns[(rand() % 9)];
	}
	string GetRandomAdjective() {
		return adjectives[(rand() % 9)];
	}
	string GeneratePoem(int lines) {
		string poem = "";
		for (int i = 0; i < lines; i++) {
			poem += (GetRandomNoun() + " are " + GetRandomAdjective() + "\n");
		}
		return poem;
	}
};
int main() {
	srand(time(NULL));
	PoemMaker poemMaker;
	poemMaker.LoadNouns("nouns.txt");
	poemMaker.LoadAdjectives("adjectives.txt");
	string poem = poemMaker.GeneratePoem(5);
	cout << poem << "\n";
	while (true);
	return 0;
}