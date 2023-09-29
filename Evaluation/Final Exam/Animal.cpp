#include "Animal.h"



Animal::Animal(int id, string name, int type) {
	this->animal_id = id;
	this->animal_name = name;
	this->animal_type = type;
	this->animal_adopted = false;
};

int Animal::getAnimal_id() const { return this->animal_id; };
string Animal::getAnimal_name() const { return this->animal_name; };
int Animal::getAnimal_type() const{ return this->animal_type; };
bool Animal::getAnimal_isAdopted()const { return this->animal_adopted; };

void Animal::setAnimal_adopted(bool adop) { this->animal_adopted = adop; };

void Animal::move() const {
	cout << "****************Animal move" << endl;
};
//void Animal::crawl() const {};

void Animal::displayAnimal()const {
	cout << "Animal : " << endl;
	cout << "Name : " << this->animal_name << endl;
	cout << "Identifier : " << this->animal_id << endl;
	cout << "Type : " << this->animal_type << endl;
	cout << "Adopted: " << (this->animal_adopted ? "Yes" : "No") << endl;
};