#include "AnimalRescueCenter.h"
#include <iostream>

AnimalRescueCenter::AnimalRescueCenter() {
	
	this->curent_number_animal = 0;
};
int AnimalRescueCenter::searchAvailableAnimal() {
	int id;
	cout << "Enter animal id: ";
	cin >> id;

	for (int i = 0; i < curent_number_animal; i++) {
		if (tab_animals[i]->getAnimal_id() == id && !tab_animals[i]->getAnimal_isAdopted()) {//"!"
			return i;
		}
	}
	return -1;
};

void AnimalRescueCenter::addAnimal() {

	int id, type;
	string name;
	double wingspan;

	if (curent_number_animal < SIZE) {
		cout << "Enter animal id: ";
		cin >> id;
		cout << "Enter animal name: ";
		cin >> name;
		cout << "Enter animal type: (1)Fish / (2)Bird : ";
		cin >> type;


		if (type == 1) //for fish
		{
			tab_animals[curent_number_animal] = new Fish(id, name, type);
			curent_number_animal++;
		}
		else if (type == 2) //for bird
		{
			cout << "Enter bird wingspan: ";
			cin >> wingspan;
			tab_animals[curent_number_animal] = new Bird(id, name, type, wingspan);
			curent_number_animal++;
		}
		
		
		cout << "Animal added successfully!" << endl;
	}
	else {
		cout << "Maximum animal capacity reached." << endl;
	}
};


void AnimalRescueCenter::giveAnAnimalToAdoption() {
	
	int index= searchAvailableAnimal();
	if (index != -1) {
		tab_animals[index]->setAnimal_adopted(true);
			cout << "Animal adopted successfully!" << endl;
		tab_animals[index]->displayAnimal();
	}
	else {
			cout << "The animal is not available for adoption." << endl;
	}
};

// method to display all available animals that have not been adopted yet
void AnimalRescueCenter::displayAllAvailableAnimals() {

	cout << "List of animals available for adoption:" << endl;
	for (int i = 0; i < curent_number_animal; i++) {
		if (!tab_animals[i]->getAnimal_isAdopted()) {
			tab_animals[i]->displayAnimal();
		}
	}
	cout << "Empty list" << endl;
};

void AnimalRescueCenter::makeTheAdoptedAnimalsMove() {
	cout << "Adopted Animals Moving:" << endl;
	//cout << curent_number_animal << endl;
	for (int i = 0; i < curent_number_animal; i++) {
		if (tab_animals[i]->getAnimal_isAdopted()) {
			if (tab_animals[i]->getAnimal_type() == 1) {

				tab_animals[i]->move();
			}
			else if (tab_animals[i]->getAnimal_type() == 2) {

				tab_animals[i]->move();
			}
		}
	}
}