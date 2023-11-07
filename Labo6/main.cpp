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
	vector<Component*> comp;
	vector<Customer*> cust;

	comp.push_back(new CPU());

	cust.push_back(new Customer());
	cust.push_back(new Company());

	Computershop computershop = Computershop("Deze noten", "uw mamaaaaa", comp, cust);

	comp = computershop.getComponents();
	comp[0]->setManufacturer("AMD");
	computershop.setComponents(comp);

	cust = computershop.getCustomers();
	cust[0]->setName("Jef");
	cust[1]->setName("Alternate");
	if (Company* c = dynamic_cast<Company*>(cust[1]))
	{
		c->setVat(21);
		cout << "vat set" << endl;
	}
	else
	{
		cout << "failed to set vat" << endl;
	}
	computershop.setCustomers(cust);

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

	for (Component* c : comp)
	{
		delete c;
	}
	for (Customer* c : cust)
	{
		delete c;
	}

	return 0;
}