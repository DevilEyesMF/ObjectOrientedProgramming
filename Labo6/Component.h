#pragma once

#include <string>

class Component
{
public:
	// getters
	std::string getManufacturer();
	std::string getName();
	float getPrice();
	int getStock();
	int getType();
	int getLaptop();

	// setters
	void setManufacturer(std::string);
	void setName(std::string);
	void setPrice(float);
	void setStock(int);
	void setType(int);
	void setLaptop(bool);

private:
	std::string manufacturer;
	std::string name;
	float price;
	int stock;
	int type;
	bool laptop;
};

