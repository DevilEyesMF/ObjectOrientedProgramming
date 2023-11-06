#include <iostream>
#include <fstream>
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

	comp.push_back(GPU("RTX 3070"));

	Computershop computershop = Computershop("Deze noten", "uw mamaaaaa", comp, cust);

	for (Component c : computershop.getComponents())
	{
		cout << c.getName();
	}

	return 0;
}