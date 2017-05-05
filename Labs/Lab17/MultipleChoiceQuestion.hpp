//Benjamin Carpenter
#ifndef mcquestion
#define mcquestion
#include <string>
#include <iostream>
#include "Question.hpp"
using namespace std;
class MultipleChoiceQuestion : public Question {
private:
	int correctAnswer;
	string m_answers[4];
public:
	void Display();
	bool CheckAnswer(int userAnswer);
	void SetCorrectAnswer(int correctAnswer);
	void SetAnswerChoices(const string& a0, const string& a1, const string& a2, const string& a3);
};

#endif
