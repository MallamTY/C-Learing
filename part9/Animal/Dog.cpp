#include "Dog.h"
#include <string>
#include <iostream>


Dog::Dog(string name, string breed, double weight) : Animal(name, weight){
    this->breed = breed;
}
string Dog::digHole() const {
    return "I am digging a hole !!!!!!!!!!";
}
string Dog::getBreed() const {
    return breed;
}
string Dog::makeNoise() const{
    return "Woof!!";
}
void Dog::chaseCat() const {
    cout<<"Here, Kitty Kitty!"<<endl;
}
string Dog::eat() const{
    return "I love eating Dog food!!";
}