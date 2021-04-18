#include "Bird.h"

Bird::Bird() {

    feathers = new bool;
    wings = new bool;
    flight = new bool;

    *feathers = true;
    *wings = true;
    *flight = true;

    setLegs(true);
    *maxLegs = 2;
    setNumLegs(2);

    *hair = false;
    *tail = true;
}

Bird::Bird(bool legs, bool hair, bool tail) : 
        Animal(&legs, &hair, &tail) {

    feathers = new bool;
    wings = new bool;

    *feathers = true;
    *wings = true;

    *maxLegs = 2;
    setNumLegs(2);
}

Bird::~Bird() {

    delete
        feathers,
        wings,
        flight,
        maxLegs;
}

void Bird::fly() {

    if (*flight)
        cout
            << "\nBecause of the feathers and wings that the bird possesses,\n"
            << "the bird flaps its wings and takes flight."
            << endl;
    else
        cout
            << "\nThis bird is unable to fly!"
            << endl;
}

void Bird::makeSound() {

    cout
        << "\nTweet tweet!"
        << endl;
}

void Bird::setFlight(bool flight)
    {*this->flight = flight;}

