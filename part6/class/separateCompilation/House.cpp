#include "House.h"
#include <iostream>

using namespace std;

House::House() {
    this->color = "White";
    this->numberStories = 2;
    this->numRooms = 20;
}
House::~House() {
    cout<<"House constructor destroyed........"<<endl;
}
void House::setNumStories(int num) {
    this->numberStories = num;
}
void House::setNumRooms(int num) {
    this->numRooms = num;
}
void House::setColor(string color) {
    this->color = color;
}
void House::print() const{
    cout<<"Temitayo house is "<<color<<" and has "<< numberStories<<" stories with "<<numRooms<<" rooms" <<endl;
}

int House::getStories() const {
    return numberStories;
}
int House::getRooms() const {
    return numRooms;
}
string House::getColor() const {
    return color; 
}


  