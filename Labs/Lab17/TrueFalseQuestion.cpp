#include "TrueFalseQuestion.hpp"
#include <string>
#include <iostream>
using namespace std;
void TrueFalseQuestion::Display() {
	Question::Display();
	cout << "(true) or (false)?\n";
}
void TrueFalseQuestion::SetCorrectAnswer(const string& correctAnswer) {
	TrueFalseQuestion::correctAnswer = correctAnswer;
}
bool TrueFalseQuestion::CheckAnswer(const string& userAnswer) {
	if (userAnswer == correctAnswer) {
		return true;
	}
	else {
		return false;
	}
}