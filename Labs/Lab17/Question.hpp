#ifndef _QUESTION_HPP
#define _QUESTION_HPP
#include <string>
using namespace std;
class Question{
protected:
	string m_questionText;
public:
	void Display();
	void SetQuestionText(const string& text);

};

#endif
