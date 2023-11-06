#pragma once

#include <string>
#include <vector>
#include "Component.h"
#include "Customer.h"

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
	std::vector<Component> components;
	std::vector<Customer> customers;
};

