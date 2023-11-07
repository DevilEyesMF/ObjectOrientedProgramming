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

	computershop.getComponents().push_back(new CPU());

	computershop.getCustomers().push_back(new Customer());
	computershop.getCustomers().push_back(new Company());

	computershop.getComponents()[0]->setManufacturer("AMD");

	computershop.getCustomers()[0]->setName("Jef");
	computershop.getCustomers()[1]->setName("Alternate");

	if (Company* c = dynamic_cast<Company*>(computershop.getCustomers()[1]))
	{
		c->setVat(21);
		cout << "vat set" << endl;
	}
	else
	{
		cout << "failed to set vat" << endl;
	}

	for (Component* c : computershop.getComponents())
	{
		cout << c->getManufacturer() << endl;
	}

	for (Customer* cu : computershop.getCustomers())
	{
		cout << cu->getName() << endl;
		if (Company* co = dynamic_cast<Company*>(cu))
		{
			cout << "VAT: " << co->getVat() << endl;
		}
		else
		{
			cout << "failed to get vat" << endl;
		}
	}

	computershop.saveToFile("test.bin");

	for (Component* c : computershop.getComponents())
	{
		delete c;
	}
	for (Customer* c : computershop.getCustomers())
	{
		delete c;
	}

	return 0;
}