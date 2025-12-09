#include "Cat.h"
#include <string>
#include <iostream>


Cat::Cat(string name, double weight) : Animal(name, weight){

}
void Cat::chaseMouse() const{
    cout<<"I love to chase mouse";
};
string Cat::makeNoise() const {
    return "Meow!!!";
}
string Cat::eat() const {
    return "Tasty food";
}