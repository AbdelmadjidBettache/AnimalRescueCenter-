#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
	int animal_id = 0;
	string animal_name = "";
	int animal_type = 0;
	bool animal_adopted = false;
	

public:
	

	Animal(int id, string name, int type);

	int getAnimal_id() const;
	string getAnimal_name() const;
	int getAnimal_type() const;
	bool getAnimal_isAdopted()const;

	void setAnimal_adopted(bool adop);

	virtual void move() const ;

	virtual void displayAnimal() const=0;

	
};
