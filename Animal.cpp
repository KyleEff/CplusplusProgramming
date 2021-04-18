#include "Animal.h"

// Construcors
Animal::Animal() {

    numLegs = new int;
    maxLegs = new int;

    swim = new bool;
    legs = new bool;
    hair = new bool;
    tail = new bool;

    sound = new string;

    *numLegs = 0;
    *swim = false;
}

Animal::Animal(bool legs, bool hair, bool tail) :
               legs(&legs), hair(&hair), tail(&tail) {

    swim = new bool;
    *swim = false;

    if (*this->legs) { 
    
        maxLegs = new int;
        numLegs = new int;
    
        *numLegs = 0;
    }
}

// Mutator Functions
void Animal::setLegs(bool legs)
    {*this->legs = legs;}

void Animal::setMaxLegs(int maxLegs)
    {*this->maxLegs = maxLegs;}

void Animal::setNumLegs(int numLegs) {
    // This function was remade to include an exception
    try {

        if (numLegs > *maxLegs)
            throw numLegs;
        else
            *this->numLegs = numLegs;
    }
    catch (int i) {

        cout
            << "Too many legs: "
            << i
            << endl;
    }
}


void Animal::setSwim(bool swim) 
    {*this->swim = swim;}

void Animal::setHair(bool hair) 
    {*this->hair = hair;}

void Animal::setTail(bool tail) 
    {*this->tail = tail;}

void Animal::setSound(string sound) 
    {*this->sound = sound;}
