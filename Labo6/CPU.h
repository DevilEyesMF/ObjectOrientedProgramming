#pragma once

#include "Component.h"

class CPU : public Component
{
public:
	// getters
	int getSpeed();
	int getCores();
	std::string getSocket();

	// setters
	void setSpeed(int);
	void setCores(int);
	void setSocket(std::string);

private:
	int speed;
	int cores;
	std::string socket;
};

