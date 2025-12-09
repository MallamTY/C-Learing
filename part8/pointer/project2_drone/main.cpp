#include "Drone.h"
#include <iostream>
#include <string>

using namespace std;


void printDroneFleetSummary(Drone** fleet, int size);
int main() {
    int droneCount = 0;
    string model;
    double battery = 0.0;

    cout<<"Please enter drone fleet count: ";
    cin >>droneCount;
    
    Drone** droneFleet = new Drone*[droneCount];

    for (int i = 0; i < droneCount; i++)
    {
        cout<<"Please enter drone model "<<(i+1)<<" : "<<endl;
        cin>>model;

        cout<<"Please enter battery life in percentage for drone "<<model<<": ";
        cin>>battery;
        

        droneFleet[i] = new Drone(model, battery);
    }
    cout<<"\n//////////////////////////////////////////////\n";
    cout<<"\n Drone fleet summary \n"<<endl;
    cout<<"//////////////////////////////////////////////";
    printDroneFleetSummary(droneFleet, droneCount);


    for (int i = 0; i < droneCount; i++)
    {
        delete droneFleet[i];
        droneFleet[i] = nullptr;
    }

    delete [] droneFleet;
    
    
    return 0;
}

void printDroneFleetSummary(Drone** fleet, int size){
    for (int i = 0; i < size; i++)
    {
       cout<<"Drone "<<(i+1)<<" "<<fleet[i]->getModelName()<<" | Battery "<<fleet[i]->getBatteryLife()<<"%"<<endl;
    }
    
}