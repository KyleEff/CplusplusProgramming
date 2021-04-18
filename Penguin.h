#ifndef PENGUIN_H
#define PENGUIN_H

#include "Animal.h"
#include "Bird.h"

class Penguin : public Bird {

    // Attributes
    bool *flippers{ nullptr };
    
public:
    // Constructors
    Penguin();
    Penguin(bool legs, bool hair, bool tail);
    // Destructor
    ~Penguin();

    // Member Functions
    void waterSwim();
    void slide();

    // Accessor Function
    void penPrint() {

        cout 
            << boolalpha
            << "Flippers: " << *flippers
            << endl

            << "Can swim: " << canSwim()
            << "\n" << endl;

        birdPrint();
    }

    void makeSound() {

        cout
            << "\nHONK HONK"
            << endl;
    }
};

#endif
