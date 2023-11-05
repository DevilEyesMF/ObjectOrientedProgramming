#include "CPU.h"

// getters
int CPU::getSpeed()
{
	return this->speed;
}
int CPU::getCores()
{
	return this->cores;
}
std::string CPU::getSocket()
{
	return this->socket;
}

// setters
void CPU::setSpeed(int speed)
{
	this->speed = speed;
}
void CPU::setCores(int cores)
{
	this->cores = cores;
}
void CPU::setSocket(std::string socket)
{
	this->socket = socket;
}
