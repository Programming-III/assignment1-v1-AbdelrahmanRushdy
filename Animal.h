#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
    string name;
    int age;
    bool isHungry;

    public:
    Animal(string name, int age, bool isHungry){
        this->name = name;
        this->age = age;
        this->isHungry = isHungry;
    }

    void display(){
        cout << "Animal's name : " << name << endl;
        cout << "Animal's age : " << age << endl;
        cout << "Is the animal hungry? " << isHungry << endl; 
    }

    void feed(){
        if(isHungry == false){
            cout << "Animal needs to be fed" << endl;
        } else{
            cout << "Animal has been fed" << endl;
        }
    };

    void setName(string setName){
        setName = name;
    }

    string getName(){
        return name;
    }

    void setAge(int setAge){
        setAge = age;
    }

    int age(){
        return age;
    }

    void setIsHungry(bool setisHungry){
        setisHungry == false;
    }

    bool getIsHungry(){
        return false;
    }

    ~Animal(){

    }

};


#endif
