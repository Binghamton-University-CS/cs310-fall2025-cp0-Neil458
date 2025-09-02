#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsIsInZoo.h"
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Tiger", 1967);
   Animal animal4("Lizard", 1980);
   AnimalsIsInZoo animalz(animal4);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);


   animal2.display();
   animal1->display();
   animal3.display();
   animalz.display();

   delete animal1;
}
