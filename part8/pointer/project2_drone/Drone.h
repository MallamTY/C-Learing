#ifndef DRONE_H
#define DRONE_H

#include <string>
using namespace std;

class Drone
{
private:
    double batteryLife;
    string modelName;
public:
    Drone(string modelName, double batteryLife);
    string getModelName() const;
    double getBatteryLife() const;

};


#endif