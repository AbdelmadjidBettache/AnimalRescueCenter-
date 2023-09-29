#pragma once
#include "Animal.h"

class Fish :public Animal
{

public:
	
	Fish(int id, string name, int type);

	void move()const override;

	

	void displayAnimal()const override;

};