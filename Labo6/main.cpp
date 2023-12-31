#include <iostream>
#include <string>

#include "Case.h"
#include "Company.h"
#include "Computershop.h"
#include "CPU.h"
#include "Customer.h"
#include "GPU.h"
#include "HardDrive.h"
#include "Invoice.h"
#include "Memory.h"
#include "Motherboard.h"
#include "PowerSupply.h"

using namespace std;

int main()
{
	Computershop computershop = Computershop("Deze noten", "uw mamaaaaa");

	computershop.addComponent(new CPU("AMD", "3700X", 329.00, 0, 0, 3600, 8, "AM4"));
	computershop.addCustomer(new Customer("Lander Van laer", "https://landervanlaer.com"));
	computershop.addCustomer(new Company("Thomas More", "Jan Pieter de Nayerlaan 5, 2860 Sint-Katelijne-Waver", 21, 0, 0));

	for (Component* co : computershop.getComponents())
	{
		if (CPU* c = dynamic_cast<CPU*>(co))
		{
			cout << "Type: " << c->getType() << "\n"
				<< "Manufacturer: " << c->getManufacturer() << "\n" 
				<< "Name: " << c->getName() << "\n"
				<< "Price: " << c->getPrice() << " EUR\n"
				<< "Stock: " << c->getStock() << "\n"
				<< "Laptop: " << (c->getLaptop() ? "Yes" : "No") << "\n"
				<< "Speed: " << c->getSpeed() << " MHz\n"
				<< "Cores: " << c->getCores() << "\n"
				<< "Socket: " << c->getSocket() << endl;
		}
	}

	for (Customer* cu : computershop.getCustomers())
	{
		cout << (cu->getCompany() ? "Business" : "Private individual") << "\n"
			<< "Name: " << cu->getName() << "\n"
			<< "Address: " << cu->getAddress() << "\n";

		if (Company* c = dynamic_cast<Company*>(cu))
		{
			cout << "VAT: " << c->getVat() << "\n"
				<< "Reduction: " << c->getReduction() << "\n"
				<< "Yearly Buy: " << c->getYearlyBuy() << endl;
		}
	}

	computershop.saveToFile("test.bin");

	return 0;
}