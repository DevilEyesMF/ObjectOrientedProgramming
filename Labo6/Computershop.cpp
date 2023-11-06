#include "Computershop.h"

// constructor
Computershop::Computershop(std::string name, std::string address, std::vector<Component> components, std::vector<Customer> customers)
{
	this->name = name;
	this->address = address;
	this->components = components;
	this->customers = customers;
}

// getters
std::string Computershop::getName()
{
	return this->name;
}
std::string Computershop::getAddress()
{
	return this->address;
}
std::vector<Component> Computershop::getComponents()
{
	return this->components;
}
std::vector<Customer> Computershop::getCustomers()
{
	return this->customers;
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
void Computershop::setComponents(std::vector<Component> components)
{
	this->components = components;
}
void Computershop::setCustomers(std::vector<Customer> customers)
{
	this->customers = customers;
}

// methods
void Computershop::addComponent(Component component)
{
	this->components.push_back(component);
}
void Computershop::addCustomer(Customer customer)
{
	this->customers.push_back(customer);
}
