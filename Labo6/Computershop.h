#pragma once

#include <string>

class Computershop
{
public:
	// getters
	std::string getName();
	std::string getAddress();
	// setters
	void setName(std::string);
	void setAddress(std::string);

private:
	std::string name;
	std::string address;
	// components
	// customers
};

