#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Mammal::Animal{
        private:
        string furColor;

        public:
        Mammal(string name, int age, bool isHungry, string furColor){
            this->furColor = furColor;
        }
        
        void setfurColor(string setfurColor){
            setfurColor = furColor;
        }

        string getfurColor(){
            return furColor;
        }

        ~Mammal(){

        }
    };

#endif
