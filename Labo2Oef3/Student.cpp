#include "Student.h"

#include <string>
#include <iostream>

// constructor
Student::Student(std::string name, int scoreMath, int scoreEnglish, int scoreHistory)
{
	this->name = name;
	if (scoreMath <= 100 && scoreMath >= 0) this->scoreMath = scoreMath;
	if (scoreEnglish <= 100 && scoreEnglish >= 0) this->scoreEnglish = scoreEnglish;
	if (scoreHistory <= 100 && scoreHistory >= 0) this->scoreHistory = scoreHistory;
}

Student::~Student()
{
	// no need to explicitly delete an std::string
}

// getters
std::string Student::getName() const
{
	return this->name;
}

int Student::getScoreMath() const
{
	return this->scoreMath;
}

int Student::getScoreEnglish() const
{
	return this->scoreEnglish;
}

int Student::getScoreHistory() const
{
	return this->scoreHistory;
}

// setters
void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setScoreMath(int score)
{
	this->scoreMath = score;
}

void Student::setScoreEnglish(int score)
{
	this->scoreEnglish = score;
}

void Student::setScoreHistory(int score)
{
	this->scoreHistory = score;
}

// methods
int Student::getAverageScore() const
{
	return (this->scoreMath + this->scoreEnglish + this->scoreHistory) / 3;
}

// global functions
Student* Student::make()
{
	std::string name;
	int scoreMath{ 0 }, scoreEnglish{ 0 }, scoreHistory{ 0 };

	std::cout << "Enter name:" << std::endl;
	std::cin >> name;
	std::cout << "Enter score for math:" << std::endl;
	std::cin >> scoreMath;
	std::cout << "Enter score for English" << std::endl;
	std::cin >> scoreEnglish;
	std::cout << "Enter score for history" << std::endl;
	std::cin >> scoreHistory;

	return new Student(name, scoreMath, scoreEnglish, scoreHistory);
}
