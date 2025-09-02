#include <iostream>
#include <stdlib.h>
#include "AnimalsIsInZoo.h"
using namespace std;

void AnimalsIsInZoo::display() {
    cout << numAnimals;

    if (animal.getSpecies() != " ") {
        cout << " ";
        animal.display();
}

    else {
        cout << endl;
    }
};
