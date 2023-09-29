#include "Application.h"
#include <conio.h>
#include <iostream>

AnimalRescueCenter Application::AnimalRescueCenter;


void Application::displayMenu() {
	char choix;
	do {
		system("cls");
		std::cout << "Animal Rescue Center" << std::endl;
		std::cout << "Here are all available options: " << std::endl;
		std::cout << " (S)ave an animal" << std::endl;
		std::cout << " (A)dopt an animal" << std::endl;
		std::cout << " (D)isplay animals" << std::endl;
		std::cout << " (M)akeTheAnimalsMove" << std::endl;
		std::cout << " (Q)uit" << std::endl;
		std::cout << "Your choice : ";
		choix = toupper(_getch());
		system("cls");
		if (choix != 'Q') {
			switch (choix) {
			case 'S':
				Application::saveAnAnimal();
				system("pause");
				break;
			case 'A':
				Application::adoptAnAnimal();
				system("pause");
				break;
			case 'D':
				Application::displayAnimals();
				system("pause");
				break;
			case 'M':
				Application::makeTheAnimalsMove();
				system("pause");
				break;
			}

		}
	} while (choix != 'Q');
}

void Application::saveAnAnimal() {
	
	AnimalRescueCenter.addAnimal();
	
}

void Application::adoptAnAnimal() {
	
	AnimalRescueCenter.giveAnAnimalToAdoption();
}

void Application::displayAnimals() {
	
	AnimalRescueCenter.displayAllAvailableAnimals();
}

void Application::makeTheAnimalsMove() {
	
	AnimalRescueCenter.makeTheAdoptedAnimalsMove();
}