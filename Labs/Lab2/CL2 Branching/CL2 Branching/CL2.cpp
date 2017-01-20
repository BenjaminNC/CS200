#include <iostream>
#include <string>
using namespace std;

int main()
{
	float tspBakingSoda = 1;
	float tspBakingPowder = 0.5;
	float cupsOfButter = 1;
	float cupsOfSugar = 1.5;
	float eggs = 1;
	float ratio;

	cout << "How many batches? ";
	cin >> ratio;

	cout << (tspBakingSoda * ratio) << " tsp baking soda" << endl;
	cout << (tspBakingPowder * ratio) << " tsp baking powder" << endl;
	cout << (cupsOfButter * ratio) << " c butter" << endl;
	cout << (cupsOfSugar * ratio) << " c white sugar" << endl;
	cout << (eggs * ratio) << " egg" << endl;

	while (true);//kludgey fix
	return 0;
}