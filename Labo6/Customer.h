#pragma once

#include <string>

class Customer
{
public:
	// getters
	std::string getName();
	std::string getAddress();
	bool getCompany();

	// setters
	void setName(std::string);
	void setAddress(std::string);
	void setCompany(bool);

private:
	std::string name;
	std::string address;
	bool company;
};

