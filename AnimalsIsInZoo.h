#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class AnimalsIsInZoo {
public:
    AnimalsIsInZoo(Animal animalZ) {
        animal = animalZ;
        numAnimals = 1;
    }

    AnimalsIsInZoo() : numAnimals(0) {}
    void display();

private:
    Animal animal;
    unsigned int numAnimals;
};

#endif
