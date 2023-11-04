#pragma once

#include <string>

class User
{
public:
	std::string getName();
	std::string getSurname();
	int getYearOfBirth();
	std::string getAddress();
	std::string getEmail();

	void setName(std::string);
	void setSurname(std::string);
	void setYearOfBirth(int);
	void setAddress(std::string);
	void setEmail(std::string);

	int getAge();
	void printData();

private:
	std::string name;
	std::string surname;
	int yearOfBirth;
	std::string address;
	std::string email;
};