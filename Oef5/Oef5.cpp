#include <iostream>
#include <random>

using namespace std;

// prototype function
void throwDie(int, int*);
void printHistogram(int, int*);

int main()
{
	int counter[] = { 0, 0, 0, 0, 0, 0 };

	cout << "60 throws:" << endl;
	throwDie(60, counter);
	printHistogram(1, counter);
	// reset counter
	memset(counter, 0, sizeof(counter));

	cout << "\n600 throws" << endl;
	throwDie(600, counter);
	printHistogram(10, counter);
	// reset counter
	memset(counter, 0, sizeof(counter));

	cout << "\n6000 throws" << endl;
	throwDie(6000, counter);
	printHistogram(100, counter);

	return 0;
}

void throwDie(int n, int* counter)
{
	for (int i = n; i > 0; i--)
	{
		counter[rand() % 6]++;
	}
}

void printHistogram(int scale, int* counter)
{
	for (int i = 0; i < 6; i++)
	{
		cout << i + 1 << ": ";
		for (int j = 0; j < counter[i] / scale; j++)
		{
			cout << "|";
		}
		cout << endl;
	}
}