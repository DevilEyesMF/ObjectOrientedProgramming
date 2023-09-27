#include <iostream>

using namespace std;

// prototype functions
int faculteit(int);

int main()
{
	const int GETAL = -5;

	cout << faculteit(GETAL) << endl;
}

int faculteit(int input)
{
	int result = 1;

	for (; input > 1; input--)
	{
		result *= input;
	}

	return result;
}