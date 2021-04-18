#ifndef GORILLA_H
#define GORILLA_H

#include "Animal.h"

class Gorilla : public Animal {
    // Attributes
    bool
        *strength{ nullptr },
        *toolUse{ nullptr };

public:
    // Constructors
    Gorilla();
    Gorilla(bool legs, bool hair, bool tail);

    // Destructor
    ~Gorilla();

    // Member Functions
    void climb();
    void poundChest();

    // Accessor Function
    void gorillaPrint() {

        cout
            << boolalpha
            << "Strength: " << *strength
            << endl

            << "Tool Use: " << *toolUse
            << "\n" << endl;

        print();
    }

    void makeSound() {

        cout
            << "\nHuff huff grunt grunt"
            << endl;
    }
};



#endif