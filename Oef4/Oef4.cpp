#include <iostream>
#include <random>

using namespace std;

int main()
{
	int counter[] = { 0, 0, 0, 0, 0, 0 };

	for (int i = 6000; i > 0; i--)
	{
		int die;

		die = rand() % 6;

		switch (die)
		{
		case 0:
			counter[0]++;
			break;
		case 1:
			counter[1]++;
			break;
		case 2:
			counter[2]++;
			break;
		case 3:
			counter[3]++;
			break;
		case 4:
			counter[4]++;
			break;
		case 5:
			counter[5]++;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << i + 1 << ": " << counter[i] << endl;
	}

	return 0;
}