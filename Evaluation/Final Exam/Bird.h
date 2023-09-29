#pragma once

#include "Animal.h"

class Bird :public Animal
{

protected:

	double wingspan = 0.0;

public:
	Bird(int id, string name, int type, double wingspan);

	void displayAnimal()const override;
	

	void move()const override;

	void crawl () const;
};