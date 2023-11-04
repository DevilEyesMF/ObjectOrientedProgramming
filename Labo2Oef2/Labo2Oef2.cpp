#include <iostream>
#include "User.h"

using namespace std;

// prototype functions
void fillUser(User*);

int main()
{
	User user1, user2;

	cout << "-----------------------\nSetting up first user:\n-----------------------" << endl;
	fillUser(&user1);

	cout << "-----------------------\nSetting up second user:\n-----------------------" << endl;
	fillUser(&user2);


	cout << "-----------------------\nShowing first user:\n-----------------------" << endl;
	user1.printData();

	cout << "-----------------------\nShowing second user:\n-----------------------" << endl;
	user2.printData();

	return 0;
}

void fillUser(User* user)
{
	string tmpStr;
	int tmpInt = 0;

	cout << "Enter the first name" << endl;
	cin >> tmpStr;
	user->setName(tmpStr);

	cout << "Enter the last name" << endl;
	cin >> tmpStr;
	user->setSurname(tmpStr);

	cout << "Enter the year of birth" << endl;
	cin >> tmpInt;
	user->setYearOfBirth(tmpInt);

	cout << "Enter address" << endl;
	cin.ignore(1, '\n');
	getline(cin, tmpStr);
	user->setAddress(tmpStr);

	cout << "Enter email" << endl;
	cin >> tmpStr;
	user->setEmail(tmpStr);

	return;
}