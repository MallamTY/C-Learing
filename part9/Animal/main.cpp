#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string>



int main() {
    // Animal myAnimal("Dog", 5343.232);
    // Dog myDog("Rover", "Rotwailer", 54.23);

    // cout<< myAnimal.getName() << endl;
    // cout<< myAnimal.getWeight() << endl;
    // cout<< myAnimal.makeNoise() << endl;
    // cout<<"\n";
    // cout<< myDog.getName() << endl;
    // cout<< myDog.getWeight() << endl;
    // cout<< myDog.makeNoise() << endl;
    // cout<< myDog.getBreed() << endl;
    // cout<< myDog.digHole() << endl;
    // myDog.chaseCat();


    // Polymorphism Implementation
    Animal* dogPtr = new Dog("Riro", "German Shepherd", 543.343);
    Animal* catPtr = new Cat("Nala", 65);

    cout<<"Dog Make Sound: "<<dogPtr->makeNoise()<<endl;
    cout << "Dog Eat: " << dogPtr->eat() << endl;


    cout<<"\nCat Make Sound: "<<catPtr->makeNoise()<<endl;
    cout << "Cat Eat: " << catPtr->eat() << endl;

    Cat* advancedCat = dynamic_cast<Cat*>(catPtr);

    if (advancedCat)
    {
       advancedCat->chaseMouse();
    }
    

    delete dogPtr;
    dogPtr = nullptr;

    delete catPtr;
    catPtr = nullptr;
    
    return 0;
}