#pragma once

#include <string>
#include <fstream>

class Component
{
public:
	// enums
	enum Type
	{
		CASE,
		CPU,
		GPU,
		HARDDRIVE,
		MEMORY,
		MOTHERBOARD,
		POWERSUPPLY
	};

	// getters
	std::string getManufacturer();
	std::string getName();
	float getPrice();
	int getStock();
	Type getType() const;
	int getLaptop();

	// setters
	void setManufacturer(std::string);
	void setName(std::string);
	void setPrice(float);
	void setStock(int);
	void setType(Type);
	void setLaptop(bool);

	// methods
	virtual void serialize(std::ofstream&) const;
	// virtual void deserialize(std::ifstream&) const;

private:
	std::string manufacturer;
	std::string name;
	float price;
	int stock;
	Type type;
	bool laptop;
};

