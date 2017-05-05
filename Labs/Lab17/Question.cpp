//Benjamin Carpenter
#include "Question.hpp"
#include <string>
#include <iostream>
using namespace std;
void Question::Display() {
	cout << "\n" << m_questionText << "\n";
}
void Question::SetQuestionText(const string& text) {
	m_questionText = text;
}