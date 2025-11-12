#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Bird::Animal{
        private:
        float wingSpan;

        public:
        Bird(string name, int age, bool isHungry, float wingSpan){
            this->wingSpan = wingSpan;
        }

        void setwingSpan(float setWingSpan){
            setWingSpan = wingSpan;
        }

        float getwingSpan(){
            return wingSpan;
        }

        ~Bird(){

        }
};

#endif
