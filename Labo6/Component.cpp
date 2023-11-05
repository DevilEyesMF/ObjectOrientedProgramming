#include "Component.h"

// getters
std::string Component::getManufacturer()
{
	return this->manufacturer;
}
std::string Component::getName()
{
	return this->name;
}
float Component::getPrice()
{
	return this->price;
}
int Component::getStock()
{
	return this->stock;
}
int Component::getType()
{
	return this->type;
}
int Component::getLaptop()
{
	return this->laptop;
}

// setters
void Component::setManufacturer(std::string manufacturer)
{
	this->manufacturer = manufacturer;
}
void Component::setName(std::string name)
{
	this->name = name;
}
void Component::setPrice(float price)
{
	this->price = price;
}
void Component::setStock(int stock)
{
	this->stock = stock;
}
void Component::setType(int type)
{
	this->type = type;
}
void Component::setLaptop(bool laptop)
{
	this->laptop = laptop;
}
