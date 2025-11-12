#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <iostream>
using namespace std;

class Reptile::Animal{
        private:
        bool isVenomous //can produce venom or not

        public:
        Reptile(string name, int age, bool isHungry, bool isVenomous){
            this->isVenomous = isVenomous;
        }

        void setisVenomous(bool setIsVenomous){
            setIsVenomous = isVenomous;
        }

        float getisVenomous(){
            return isVenomous;
        }

        ~Reptile(){

        }
    };

#endif
