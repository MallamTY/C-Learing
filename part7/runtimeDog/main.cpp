#include <iostream>
#include <stdexcept>
#include "Dog.h"
using namespace std;


int main() {
    try{
        Dog myDog("Rot Wailer");
        Dog yourDog("Ekuke");
        Dog ourDog("jagua");

        cout<< yourDog.getBreed()<< endl;
        cout<< myDog.getBreed()<<endl;
        cout<<ourDog.getBreed()<<endl;
    }
    catch(const runtime_error& error){
        cout<<error.what()<<endl;
    }
}