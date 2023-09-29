#include "Bird.h"



Bird::Bird(int id, string name, int type, double wingspan) : Animal(id, name, type) {
	this->wingspan = wingspan;
};

void Bird::displayAnimal()const 
{
	Animal::displayAnimal();
	cout << "Wingspan : " << this->wingspan << endl;
	
};


void Bird::crawl() const{

	cout << this->animal_name << " fly in the bird sanctuary!" << endl;
};

void Bird::move() const{
	this->crawl();
};