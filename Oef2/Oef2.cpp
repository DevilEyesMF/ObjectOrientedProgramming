#include <iostream>

using namespace std;

// prototype functions
int faculteit(int);

int main()
{
	cout << faculteit(5) << endl;
}

int faculteit(int input)
{
	int result = 1;

	for (; input > 0; input--)
	{
		result *= input;
	}

	return result;
}