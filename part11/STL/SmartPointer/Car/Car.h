#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;


class Car
{
private:
    string color;
    int numDoors;
public:
    Car(string color, int numDoors);
    string getColor() const;
    int getDoors() const;
};


#endif