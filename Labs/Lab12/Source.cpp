//Benjamin Carpenter 3/23/17
#include <string>;
#include <ioStream>;
using namespace std;
struct College
{
	string name;
	string state;
};

struct Student
{
	string name;
	College* ptrSchool;
};

int main() {
	College colleges[3];
	colleges[0].name = "JCCC";
	colleges[0].state = "KS";
	colleges[1].name = "MCCKC";
	colleges[1].state = "MO";
	colleges[2].name = "KCKCC";
	colleges[2].state = "KS";

	Student students[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter name for student " << (i + 1) << ": ";
		cin >> students[i].name;
		cout << "Which college for " << students[i].name << "\n\n1. JCCC\n2. MCCKC\n3. KCKCC\n\n>> ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			students[i].ptrSchool = &colleges[0];
			break;
		case 2:
			students[i].ptrSchool = &colleges[1];
			break;
		case 3:
			students[i].ptrSchool = &colleges[2];
			break;
		}
	}
	cout << "\nAllStudents\n\n";
	for (int i = 0; i < 5; i++) {
		cout << (i + 1) << ". " << students[i].name << "\t" << (*students[i].ptrSchool).name << "\t" << (*students[i].ptrSchool).state << "\n";
	}
	while (true);
	return 0;
}
