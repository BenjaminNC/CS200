//Benjamin Carpenter
#ifndef tfquestion
#define tfquestion
#include <string>
#include <iostream>
#include "Question.hpp"
using namespace std;
class TrueFalseQuestion : public Question {
private:
	string correctAnswer;
public:
	void Display();
	bool CheckAnswer(const string& userAnswer);
	void SetCorrectAnswer(const string& correctAnswer);
};
#endif
