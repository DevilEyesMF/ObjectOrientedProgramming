#include "User.h"
#include <iostream>

// getters
std::string User::getName()
{
	return this->name;
}

std::string User::getSurname()
{
	return this->surname;
}

int User::getYearOfBirth()
{
	return this->yearOfBirth;
}

std::string User::getAddress()
{
	return this->address;
}

std::string User::getEmail()
{
	return this->email;
}

// setters
void User::setName(std::string name)
{
	this->name = name;
}

void User::setSurname(std::string surname)
{
	this->surname = surname;
}

void User::setYearOfBirth(int yearOfBirth)
{
	this->yearOfBirth = yearOfBirth;
}

void User::setAddress(std::string address)
{
	this->address = address;
}


void User::setEmail(std::string email)
{
	this->email = email;
}

// methods
int User::getAge()
{
	return 2023 - this->yearOfBirth;
}

void User::printData()
{
	std::cout << "Name: " << this->name << " " << this->surname << std::endl;
	std::cout << "Age: " << this->getAge() << std::endl;
	std::cout << "Address: " << this->address << std::endl;
	std::cout << "Email: " << this->email << std::endl;
}