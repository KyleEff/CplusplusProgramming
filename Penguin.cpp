#include "Penguin.h"

// Constructors
Penguin::Penguin() {

    flippers = new bool;
    *flippers = true;

    setFlight(false);
    setSwim(true);
    setNumLegs(2);
}

Penguin::Penguin(bool legs, bool hair, bool tail) :
            Bird(&legs, &hair, &tail) {

    flippers = new bool;
    *flippers = true;

    setSwim(true);
    setNumLegs(2);
}
// Destructors
Penguin::~Penguin() {

    delete flippers;
}

// Member Functions
void Penguin::waterSwim() {

    cout
        << "\nThe penguin jumps into the water and swims like a torpedo with ease!"
        << endl;
}

void Penguin::slide() {

    cout
        << "\nThe penguin lays on its belly and slides on the ice!"
        << endl;
}

