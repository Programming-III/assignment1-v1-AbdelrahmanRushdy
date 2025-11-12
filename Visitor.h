#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor{
        private:
        string visitorName;
        int ticketsBought;

        public:
        Visitor(string visitorName, int ticketsBought){
            this->visitorName = visitorName;
            this->ticketsBought = ticketsBought;
        }

        void displayInfo(){
            cout << "Visitor Name: " << visitorName << endl;
            cout << "Tickets Bought: " << ticketsBought << endl;
        }

        ~Visitor(){

        }
    };




#endif
