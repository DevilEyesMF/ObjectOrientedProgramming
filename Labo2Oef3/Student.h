#pragma once

#include <string>

class Student
{
public:
	Student(std::string name, int scoreMath, int scoreEnglish, int scoreHistory);
	~Student();
	
	std::string getName() const;
	int getScoreMath() const;
	int getScoreEnglish() const;
	int getScoreHistory() const;

	void setName(std::string);
	void setScoreMath(int);
	void setScoreEnglish(int);
	void setScoreHistory(int);

	int getAverageScore() const;

	static Student* make();

private:
	std::string name;
	int scoreMath = 0;
	int scoreEnglish = 0;
	int scoreHistory = 0;
};