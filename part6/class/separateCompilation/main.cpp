#include <iostream>
#include "House.h"

using namespace std; 

int main() {
    House temitayoHouse;
    // House nurudeenHouse;

    // temitayoHouse.setColor("Blue");
    // temitayoHouse.setNumStories(1);
    // temitayoHouse.setNumRooms(4);

    // nurudeenHouse.setColor("Green");
    // nurudeenHouse.setNumRooms(2);
    // nurudeenHouse.setNumStories(3);
    
    temitayoHouse.print();
    temitayoHouse.setColor("Blue");
    temitayoHouse.setNumStories(1);
    temitayoHouse.setNumRooms(4);
    cout<<endl;
    temitayoHouse.print();
    return 0;
}