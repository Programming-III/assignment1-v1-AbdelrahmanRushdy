#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Enclosure{
        private:
        Animal* animal;
        int capacity;
        int currentCount;

        public:
        Enclosure(int capacity, int currentCount){
            this->capacity = capacity;
            this->currentCount = currentCount;
        }

        void addAnimal(Animal* Animal){
            if(currentCount < capacity){
                this->animal = animal;
                currentCount++;
                cout << "Animal added" << endl;
            } else{
                cout << "Enclosure full" << endl;
            }
        };

#endif
