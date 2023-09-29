#include "Fish.h"


Fish::Fish(int id, string name, int type) :Animal(id, name, type) {

};


void Fish::move() const{

	cout << this->animal_name << " swim in the aquarium!" << endl;
};

//void Fish::crawl() const {
//	
//};
void Fish::displayAnimal() const 
{
	Animal::displayAnimal();
};




