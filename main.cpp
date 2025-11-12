#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {
    Enclosure e1(1, 10);
    e1.addAnimal(new Mammal("Lion", 5, true, "Golden"));
    e1.addAnimal(new Bird("Parrot", 2, false, 0.25f));
    e1.addAnimal(new Reptile("Snake", 3, true, true));
    e1.displayAnimals();
    Visitor v("Sarah Ali", 3);
    v.displayInfo();
    
    return 0;
}
