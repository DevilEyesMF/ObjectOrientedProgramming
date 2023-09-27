#include <iostream>
#include <random>

using namespace std;

int main()
{
	int number = rand() % 1000 + 1;
	int guess = 0;
	int counter = 1;

	cin >> guess;

	for (;guess != number; counter++)
	{
		if (guess < number)
		{
			cout << "higher" << endl;
		}
		else
		{
			cout << "lower" << endl;
		}
		cin >> guess;
	}

	cout << "\nThe number was " << number << "\nguesses: " << counter << endl;

	return 0;
}