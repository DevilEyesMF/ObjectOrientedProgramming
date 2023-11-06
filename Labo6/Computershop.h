#pragma once

#include <string>
#include <vector>
#include "Component.h"
#include "Customer.h"

class Computershop
{
public:
	//constructor
	Computershop(std::string name, std::string address, std::vector<Component> components, std::vector<Customer> customers);

	// getters
	std::string getName();
	std::string getAddress();
	std::vector<Component> getComponents();
	std::vector<Customer> getCustomers();

	// setters
	void setName(std::string);
	void setAddress(std::string);
	void setComponents(std::vector<Component>);
	void setCustomers(std::vector<Customer>);

	// methods
	void addComponent(Component);
	void addCustomer(Customer);

private:
	std::string name;
	std::string address;
	std::vector<Component> components;
	std::vector<Customer> customers;
};

