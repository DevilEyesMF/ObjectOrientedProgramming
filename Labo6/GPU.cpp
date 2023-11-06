#include "GPU.h"

// constructor
GPU::GPU(std::string name)
{
	this->setName(name);

	this->busspeed = 0;
	this->power = 0;
}

// getters
int GPU::getPower()
{
	return this->power;
}
int GPU::getBusspeed()
{
	return this->busspeed;
}

// setters
void GPU::setPower(int power)
{
	this->power = power;
}
void GPU::setBusspeed(int busspeed)
{
	this->busspeed = busspeed;
}
