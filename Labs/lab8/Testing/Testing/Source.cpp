#include <iostream>
#include <string>
using namespace std;

float Average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

void Test_Average()
{
	if (Average(1, 2, 3) != 2) {
		cout << "Average test failed\n";
	}
	else {
		cout << "Average test successful\n";
	}
	
}

int Max(int a, int b, int c)
{
	if (a < b && a < c)
	{
		if (c < b) {
			return b;
		}
		else {
			return c;
		}
	}
	else
	{
		return a;
	}
}

void Test_Max()
{
	if (Max(4, 8, 16) != 16) {
		cout << "Max test failed\n";
	}
	else {
		cout << "Max test successful\n";
	}
}

int Factorial(int n)
{
	int fac = n;
	for (int i = (n - 1); i > 0; i--)
	{
		fac = fac * i;
	}
	return fac;
}

void Test_Factorial()
{
	if (Factorial(3) != 6) {
		cout << "Factorial test failed\n";
	}else{
		cout << "Factorial test successful\n";
	}
}

string FormatName(string first, string last)
{
	return last + ", " + first;
}

void Test_FormatName()
{
	if (FormatName("John", "Smith") != "Smith, John") {
		cout << "FormatName test failed\n";
	}
	else {
		cout << "FormatName test successful\n";
	}
}

int main()
{
	Test_Average();
	Test_Max();
	Test_Factorial();
	Test_FormatName();
	while (true);
	return 0;
}