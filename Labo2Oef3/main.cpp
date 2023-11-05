#include <iostream>
#include <string>

#include "Student.h"

using namespace std;

// main
int main()
{
	int numberOfStudents;
	int classAverage = 0;

	cout << "Hoeveel studenten zijn er ?" << endl;
	cin >> numberOfStudents;

	Student** students = new Student* [numberOfStudents];

	for (int i = 0; i < numberOfStudents; i++)
	{
		cout << "Enter info for student " << i + 1 << ":\n";
		students[i] = Student::make();

		classAverage += students[i]->getAverageScore();
	}
	
	classAverage /= numberOfStudents;

	cout << "The following students scored above average:\n";

	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i]->getAverageScore() > classAverage) cout << students[i]->getName() << "\n";
	}

	cout << endl;

	delete[] students;
}