#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
    // Attributes
    bool 
        *feathers{ nullptr },
        *wings{ nullptr },
        *flight{ nullptr };

    string* sound{ nullptr };

public:
    // Constructors
    Bird();
    Bird(bool legs, bool hair, bool tail);
    // Destructor
    ~Bird();

    // Member Functions
    void fly();
    void makeSound();

    // Mutator Function
    void setFlight(bool flight);

    // Accessor Function
    void birdPrint() {

    cout 
        << boolalpha
        << "Feathers: " << *feathers
        << endl

        << "Wings: " << *wings
        << endl

        << "Max Number of Legs: " << *maxLegs
        << "\n" << endl;

    print();
}

};

#endif
