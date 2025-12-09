#include "Car.h"
#include <string>
#include <iostream>

using namespace std;


int main() {
    unique_ptr<Car> myCar = make_unique<Car>("Blue", 4);

    cout << "My car is color: " << myCar->getColor() << " and has " << myCar->getDoors() << " doors" << endl;

    return 0;
}