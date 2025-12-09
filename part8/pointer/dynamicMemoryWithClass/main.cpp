#include <iostream>
#include "Dog.h"

using namespace std;

int main(){
    Dog* myDogPtr = new Dog("Rover", "German Shepherd");
    Dog* yourDogPtr = new Dog("Brutal", "Rot Wailer");


    cout<<myDogPtr->getName()<<"->"<<myDogPtr->getBreed()<<endl;
    cout<<yourDogPtr->getName()<<"->"<<yourDogPtr->getBreed()<<endl;



    cout<<"\nUsing dereference and dot operator"<<endl;
    cout<<(*myDogPtr).getName()<<"->"<<(*myDogPtr).getBreed()<<endl;
    cout<<(*yourDogPtr).getName()<<"->"<<(*yourDogPtr).getBreed()<<endl;


    delete myDogPtr;
    delete yourDogPtr;
    myDogPtr = nullptr;
    yourDogPtr = nullptr;
    return 0;
}