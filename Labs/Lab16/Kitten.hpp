#ifndef kitten
#define kitten
#include <string>
using namespace std;
class Kitten {
private:
	string m_name;
public:
	static int m_kittenCount;
	Kitten(string name);
	void Display();
};


#endif
