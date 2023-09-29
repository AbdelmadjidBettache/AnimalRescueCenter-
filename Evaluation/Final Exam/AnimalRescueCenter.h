#pragma once
#include "Animal.h"
#include"Fish.h"
#include"Bird.h"

class AnimalRescueCenter
{
private:
	static const int SIZE = 25;
	Animal* tab_animals[SIZE];
	int curent_number_animal;


	int searchAvailableAnimal();
public:
	AnimalRescueCenter(); // This is the only constructor required. 

	void addAnimal();


	void giveAnAnimalToAdoption();

	// method to display all available animals that have not been adopted yet
	void displayAllAvailableAnimals();

	void makeTheAdoptedAnimalsMove();

	

};