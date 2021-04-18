/*
Kyle Free
ITSE 2331
4/17/2021
Animal Class - Polymorphism Program
This program demonstrates the Animal class and its derived classes,
    and the associated member functions.;
*/
#include "Animal.h"
#include "Bird.h"
#include "Penguin.h"
#include "Gorilla.h"
#include "Fish.h"

int main() {

    cout << "****Animal****" << endl;
    Animal myAnimal;
    myAnimal.setLegs(true);
    myAnimal.setMaxLegs(2);
    myAnimal.setHair(false);
    myAnimal.setTail(true);
    myAnimal.setSound("CAW");
    myAnimal.setNumLegs(3);
    myAnimal.makeSound();
    myAnimal.print();

    cout << "\n****Gorilla****" << endl;
    Gorilla myGorilla;
    cout << "Unique Attributes:" << endl;
    myGorilla.gorillaPrint();
    myGorilla.makeSound();
    myGorilla.poundChest();
    myGorilla.climb();

    cout << "\n****Fish****" << endl;
    Fish* myFish = new Fish();
    cout << "Unique Attributes:" << endl;
    myFish -> fishPrint();
    myFish -> makeSound();
    myFish -> raise();
    ++*myFish;
    ++*myFish;
    myFish -> lower();
    --*myFish;
    --*myFish;
    delete myFish;

    cout << "\n****Bird****" << endl;
    Bird myBird = Bird();
    cout << "Unique Attributes:" << endl;
    myBird.birdPrint();
    myBird.makeSound();
    myBird.fly();

    cout << "\n****Penguin****" << endl;
    Penguin myPenguin;
    cout << "Unique Attributes:" << endl;
    myPenguin.penPrint();
    myPenguin.makeSound();
    myPenguin.slide();
    myPenguin.waterSwim();
    myPenguin.fly();

/*
    Animal animal;
    animal.makeSound();

    Fish fish;
    fish.makeSound();
    fish.getNumLegs();

    Animal badFish = Fish();
    badFish.makeSound();
    badFish.getNumLegs();

    Animal* goodFish = new Fish();
    goodFish -> makeSound();
    goodFish -> getNumLegs();

    delete goodFish;
*/
    
    cin.get();

    return 0;
}
