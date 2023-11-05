#include "Customer.h"

// getters
std::string Customer::getName()
{
	return this->name;
}
std::string Customer::getAddress()
{
	return this->address;
}
bool Customer::getCompany()
{
	return this->company;
}

// setters
void Customer::setName(std::string name)
{
	this->name = name;
}
void Customer::setAddress(std::string address)
{
	this->address = address;
}
void Customer::setCompany(bool company)
{
	this->company = company;
}
