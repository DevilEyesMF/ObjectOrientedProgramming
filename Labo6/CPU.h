#pragma once

#include "Component.h"

class CPU : public Component
{
public:
	/* constructor */
	CPU();

	/* getters */
	int getSpeed();
	int getCores();
	std::string getSocket();

	/* setters */
	void setSpeed(int);
	void setCores(int);
	void setSocket(std::string);

	/* methods */
	void serialize(std::ofstream&) const override;

private:
	int speed;
	int cores;
	std::string socket;
};

