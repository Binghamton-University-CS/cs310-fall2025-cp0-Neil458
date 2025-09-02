#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

void Animal::display() {
    cout << species << " [" << yeardiscovered << "]" << endl;
}


string Animal::getSpecies() {
    return species;
}
