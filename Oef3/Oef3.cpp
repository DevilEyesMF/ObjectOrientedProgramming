#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int number;
	cin >> number;

	for (int i = log10(number); i >= 0; i--)
	{
		cout << (number / (int)pow(10, i)) % 10 << "\t";
	}

	cout << endl;

	return 0;
}