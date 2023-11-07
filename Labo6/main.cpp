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
	vector<Component> comp;
	vector<Customer> cust;

	comp.push_back(CPU());

	Computershop computershop = Computershop("Deze noten", "uw mamaaaaa", comp, cust);

	comp = computershop.getComponents();
	comp[0].setManufacturer("Intel");
	computershop.setComponents(comp);

	for (Component c : computershop.getComponents())
	{
		cout << c.getManufacturer();
	}

	computershop.saveToFile("test.bin");

	return 0;
}