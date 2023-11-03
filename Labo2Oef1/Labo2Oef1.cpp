#include <iostream>

using namespace std;

// function prototypes
unsigned int* readNumbers();
void evenAndOdd(unsigned int*);
void avg(unsigned int*);
void sum(unsigned int*);
void sort(int, unsigned int*);
void multiply(int, unsigned int*);

int main()
{
	for (;;)
	{
		int choice = 0;
		unsigned int* number;

		cout << "1. Getallenlijst inlezen\n2. Even en oneven getallen apart weergeven\
				\n3. Gemiddelde berekenen\n4. Som berekenen\n5. Sorteren\n6. Vermenigvuldigen\n7. Sluiten\n";

		cin >> choice;

		switch (choice)
		{
		case 1:
			number = readNumbers();
			break;
		case 2:
			// even / oneven
			break;
		case 3:
			// avg
			break;
		case 4:
			// som
			break;
		case 5:
			// sort
			break;
		case 6:
			// multiply
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "invalid choice\n";
			break;
		}
	}

	return 0;
}

unsigned int* readNumbers()
{
	int n = 0;

	cout << "How many numbers would you like to enter ?\n";
	cin >> n;

	int* number = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		cout << "Enter number " << i + 1 << ":\n";
		// cin >> number[i];
		cout << number;
	}
}