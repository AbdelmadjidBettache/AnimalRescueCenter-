#pragma once

#include "AnimalRescueCenter.h"
class Application
{
	static AnimalRescueCenter AnimalRescueCenter; //Static data member of class type AnimalRescueCentre
	static void saveAnAnimal();
	static void adoptAnAnimal();
	static void displayAnimals();
	static void makeTheAnimalsMove();
public:
	static void displayMenu();
};

