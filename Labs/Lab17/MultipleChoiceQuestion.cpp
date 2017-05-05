//Benjamin Carpenter
#include "MultipleChoiceQuestion.hpp"
#include <string>
#include <iostream>
void MultipleChoiceQuestion::Display() {
	Question::Display();
	for (int i = 0; i < 4; i++) {
		cout << i << ". " << m_answers[i] << "\n";
	}
}
void MultipleChoiceQuestion::SetCorrectAnswer(int correctAnswer) {
	MultipleChoiceQuestion::correctAnswer = correctAnswer;
}
bool MultipleChoiceQuestion::CheckAnswer(int userAnswer) {
	if (userAnswer == correctAnswer) {
		return true;
	}
	else {
		return false;
	}
}
void MultipleChoiceQuestion::SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3) {
	m_answers[0] = a0;
	m_answers[1] = a1;
	m_answers[2] = a2;
	m_answers[3] = a3;
}