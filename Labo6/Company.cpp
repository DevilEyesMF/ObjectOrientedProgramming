#include "Company.h"

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