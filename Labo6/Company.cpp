#include "Company.h"

/* constructor */
Company::Company()
{
	this->setCompany(true);
	this->vat = 0;
	this->reduction = 0;
	this->yearlyBuy = 0;
}

// getters
int Company::getVat()
{
	return this->vat;
}
int Company::getReduction()
{
	return this->reduction;
}
int Company::getYearlyBuy()
{
	return this->yearlyBuy;
}

// setters
void Company::setVat(int vat)
{
	this->vat = vat;
}
void Company::setReduction(int reduction)
{
	this->reduction = reduction;
}
void Company::setYearlyBuy(int yearlyBuy)
{
	this->yearlyBuy = yearlyBuy;
}

// methods
int Company::calculateReduction()
{
	return -1;
}
void Company::serialize(std::ofstream& filestream) const
{
	Customer::serialize(filestream); // serialize the common data

	/* write vat */
	filestream.write(reinterpret_cast<const char*>(&this->vat), sizeof(this->vat));

	/* write reduction */
	filestream.write(reinterpret_cast<const char*>(&this->reduction), sizeof(this->reduction));

	/* write yearlyBuy */
	filestream.write(reinterpret_cast<const char*>(&this->yearlyBuy), sizeof(this->yearlyBuy));
}