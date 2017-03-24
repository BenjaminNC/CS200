//Benjamin Carpenter 3/23/17
#include <string>;
#include <iostream>;
#include <cstdlib>;      // to use rand()
#include <ctime>;        // to use time()
using namespace std;
int main() {
	srand(time(NULL)); // (At the beginning of main())

	cout << "Lotto number count: ";
	int size;
	cin >> size;
	cout << "\n";

	int* lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++) {
		lottoNumbers[i] = (rand() % 100);
		//Outputted the data here because I thought that
		//building another unnecessary for loop was a waste.
		cout << lottoNumbers[i] << "\t";
	}
	cout << "\n";
	delete lottoNumbers;
	while (true);
	return 0;
}