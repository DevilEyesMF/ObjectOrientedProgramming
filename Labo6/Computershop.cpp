#include "Computershop.h"

// getters
std::string Computershop::getName()
{
	return this->name;
}

std::string Computershop::getAddress()
{
	return this->address;
}

// setters
void Computershop::setName(std::string name)
{
	this->name = name;
}

void Computershop::setAddress(std::string address)
{
	this->address = address;
}