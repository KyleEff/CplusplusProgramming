#include "Fish.h"

// Constructors
Fish::Fish() {

    gills = new bool;
    swimBladder = new bool;

    swimBladderLvl = new int;

    *gills = true;
    *swimBladder = true;

    *swimBladderLvl = 10;

    if (*gills)
        setSwim(true);
    
    setLegs(false);
    *hair = false;
    *tail = true;
}

Fish::Fish(bool legs, bool hair, bool tail) :
        Animal(&legs, &hair, &tail) {

    gills = new bool;
    swimBladder = new bool;
    swimBladderLvl = new int;

    *gills = true;
    *swimBladder = true;
    *swimBladderLvl = 10;

    setSwim(true);
}

// Destructor
Fish::~Fish() {

    delete
        gills,
        swimBladder,
        swimBladder;
}

// Member Functions
void Fish::raise() {

    if (*swimBladderLvl <= 20) {

        ++*swimBladderLvl;

        cout
            << "\nThe fish increases the amount of gas in its swim bladder,\n"
            << "raising the fish in the water!\n"
            << "Swim Bladder Gas Level: " << *swimBladderLvl
            << endl;
    }
    else
        cout
            << "\nThe fish cannot raise any more!"
            << endl;
}

void Fish::lower() {

    if (*swimBladderLvl > 0) {

        --*swimBladderLvl;

        cout
            << "\nThe fish decreases the amount of gas in its swim bladder,\n"
            << "lowering the fish in the water!\n"
            << "Swim Bladder Gas Level: " << *swimBladderLvl
            << endl;
    }
    else
        cout
            << "\nThe fish cannot lower any more!"
            << endl;
}

// Added overloaded operators
// Overloaded increment operators alter the swim bladder level of the fish
Fish Fish::operator++() {

    ++*swimBladderLvl;

    cout
        << getSwimBladderLvl()
        << endl;

    return *this;
}

Fish Fish::operator--() {

    --*swimBladderLvl;

    cout
        << getSwimBladderLvl()
        << endl;

    return *this;
}
