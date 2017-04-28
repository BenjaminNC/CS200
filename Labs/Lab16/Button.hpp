//Benjamin Carpenter
#ifndef button
#define button
#include <string>
#include <iostream>
using namespace std;
class Button {
private:
	string m_text;
public:
	void SetText(string text);
	void Draw() const;
};
#endif
