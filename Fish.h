#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
    // Attributes
    bool 
        *gills{ nullptr },
        *swimBladder{ nullptr };

    int* swimBladderLvl{ nullptr };

public:
    // Constructors
    Fish();
    Fish(bool legs, bool hair, bool tail);
    Fish(int swimBladderLvl);

    // Destructors
    ~Fish();

    // Member Functions
    void raise();
    void lower();

    // Accessor Function
    void fishPrint() {

        cout 
            << boolalpha
            << "Gills: " << *gills
            << endl

            << "Swim Bladder: " << *swimBladder
            << endl

            << "Swim Bladder Gas Level: " << *swimBladderLvl
            << "\n" << endl;

        print();
    }

    int getSwimBladderLvl()
        {return *swimBladderLvl;}

    void makeSound() {

        cout
            << "\nBlub blub"
            << endl;
    }

    // Overloaded Operators
    Fish operator++();
    Fish operator--();

};

#endif
