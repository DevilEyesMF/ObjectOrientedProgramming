#pragma once

#include <string>
#include <fstream>

class Customer
{
public:
	/* constructor */
	Customer();

	/* getters */
	std::string getName();
	std::string getAddress();
	bool getCompany();

	/* setters */
	void setName(std::string);
	void setAddress(std::string);
	void setCompany(bool);

	/* methods */
	virtual void serialize(std::ofstream&) const;

private:
	std::string name;
	std::string address;
	bool company;
};

