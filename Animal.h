#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal(string speciesName, unsigned int discoveryYear) {
        species = speciesName;
        yeardiscovered = discoveryYear;
    }
    Animal() : species(""), yeardiscovered(0) {}
    void display();
    string getSpecies();

private:
    string species;
    unsigned int yeardiscovered;
};

#endif
