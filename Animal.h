#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal {
    // Attributes
    int* numLegs{ nullptr };
        
    bool* swim{ nullptr };

public:

    bool 
        *legs{ nullptr },
        *hair{ nullptr },
        *tail{ nullptr };

    string* sound{ nullptr };

    int* maxLegs{ nullptr };

    // Constructors
    Animal();
    Animal(bool legs, bool hair, bool tail);

    // Destructors
    virtual ~Animal() {

        delete
            numLegs,
            swim,
            maxLegs,
            legs,
            hair,
            tail,
            sound;
}

public:
    // Member Functions
    // Mutator Function Declartions
    void setLegs(bool legs);
    void setSwim(bool swim);
    void setHair(bool hair);
    void setTail(bool tail);

    void setMaxLegs(int maxLegs);
    void setNumLegs(int numLegs);

    void setSound(string sound);


    // Accessor functions
    virtual void makeSound() {

        cout
            << *sound
            << endl;
    }

    void getNumLegs() {

        try {

            cout
                << "Number of legs: " << *numLegs
                << endl;
        
            if (*numLegs > *maxLegs)
                throw *numLegs;
        }
        catch (int i) {

            cout
                << "Too many legs: "
                << i
                << endl;
        }
    }

    bool canSwim() {

        if (*swim == true)
            return true;

        else
            return false;
    }

    void print() {

        cout 
            << boolalpha // This object dereferences boolean values into English

            << "Attributes: \n"
            << "Legs: " << *legs
            << endl

            << "Swim: " << canSwim()
            << endl

            << "Hair: " << *hair
            << endl

            << "Tail: " << *tail
            << endl;

        // Function call added
        getNumLegs();
    }
};

#endif
