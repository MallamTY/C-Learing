#include "CropHybridizationSimulator.h"
#include <iostream>
#include <ctime>
#include <cstdlib>




CropHybridizationSimulator::CropHybridizationSimulator(int h, int y, int d): heigth(h), yield(y), droughtResistance(d){

}
int CropHybridizationSimulator::getHeigth() const {
    return heigth;
}
int CropHybridizationSimulator::getYield() const {
    return yield;
}
int CropHybridizationSimulator::getDroughtResistance() const{
    return droughtResistance;
}

int CropHybridizationSimulator::getScore() const{
    return (heigth * 2) + (yield * 3) + (droughtResistance * 4);
}

bool CropHybridizationSimulator::operator==(const CropHybridizationSimulator &other) const {
    return getScore() == other.getScore();
}
bool CropHybridizationSimulator::operator!=(const CropHybridizationSimulator &other) const{
    return !(*this == other);
}
bool CropHybridizationSimulator::operator<(const CropHybridizationSimulator &other) const{
    return getScore() < other.getScore();
}
bool CropHybridizationSimulator::operator>(const CropHybridizationSimulator &other) const{
    return getScore() > other.getScore();
}
bool CropHybridizationSimulator::operator<=(const CropHybridizationSimulator &other) const{
    return getScore() <= other.getScore();
}
bool CropHybridizationSimulator::operator>=(const CropHybridizationSimulator &other)const  {
    return getScore() >= other.getScore();
}
CropHybridizationSimulator CropHybridizationSimulator::operator+(const CropHybridizationSimulator &other) const {
    srand(time(nullptr));
    auto randomize = [] (int value) {
        int variation = (rand() % 3) -1 ; // -1, 0, or 1
        return value + variation;
    };
    int newHeigth = randomize((heigth + other.heigth) / 2);
    int newYield = randomize(yield + other.yield) / 2;
    int newDroughtResistance = randomize((droughtResistance + other.droughtResistance) / 2);
    return CropHybridizationSimulator(newHeigth, newYield, newDroughtResistance);
}
void CropHybridizationSimulator::operator=(const CropHybridizationSimulator &other){
    heigth = other.heigth;
    yield = other.yield;
    droughtResistance = other.droughtResistance;
}
