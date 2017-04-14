//Benjamin Carpenter 3/23/17
#include <string>;
#include <iostream>;
using namespace std;
struct Person
{
	string name;
	Person* ptrFriend;
};
int main() {
	Person* personA;
	Person* personB;
	Person* personC;

	personA = new Person;
	personB = new Person;
	personC = new Person;

	(*personA).name = "Joe";
	(*personB).name = "Austin";
	(*personC).name = "Elly";

	(*personA).ptrFriend = personB;
	(*personB).ptrFriend = personC;
	(*personC).ptrFriend = personA;

	cout << "Person A: " << (*personA).name << ", friend: " << personA->ptrFriend->name << "\n" <<
		"Person B: " << (*personB).name << ", friend: " << personB->ptrFriend->name << "\n" <<
		"Person C: " << (*personC).name << ", friend: " << personC->ptrFriend->name << "\n";
	delete personA;
	delete personB;
	delete personC;

	while (true);
	return 0;
}
