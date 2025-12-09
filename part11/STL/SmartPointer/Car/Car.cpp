#include "Car.h"
#include <string>

using namespace std;


Car::Car(string color, int numDoors) : numDoors(numDoors), color(color) {
};
string Car::getColor() const {
    return color;
}
int Car::getDoors() const {
    return numDoors;
}