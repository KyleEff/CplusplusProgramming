#include "Gorilla.h"

// Constructors
Gorilla::Gorilla() {

    strength = new bool;
    toolUse = new bool;

    *strength = true;
    *toolUse = true;

    *legs = true;
    setNumLegs(2);

    *hair = true;
    *tail = false;
}

Gorilla::Gorilla(bool legs, bool hair, bool tail) :
            Animal(&legs, &hair, &tail) {
        
    strength = new bool;
    toolUse = new bool;

    *strength = true;
    *toolUse = true;

    setNumLegs(2);
}

// Destructor
Gorilla::~Gorilla() {

    delete
        strength,
        toolUse;
}

// Member Functions
void Gorilla::climb() {

    cout
        << "\nDue to its upper body strength,\n"
        << "the gorilla is able to scale tall structures!"
        << endl;
}

void Gorilla::poundChest() {

    cout
        << "\nThe gorilla audibly pounds its chest!"
        << endl;
}
