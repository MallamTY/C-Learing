#include "CropHybridizationSimulator.h"
#include <iostream>
#include <memory>
#include <vector>


using namespace std;



void printCropDetails(const CropHybridizationSimulator& crop);
int main() {
    vector<unique_ptr <CropHybridizationSimulator>> crops;
    crops.push_back(make_unique<CropHybridizationSimulator>(10, 20, 30));
    crops.push_back(make_unique<CropHybridizationSimulator>(15, 25, 20));
    crops.push_back(make_unique<CropHybridizationSimulator>(20, 15, 25));

    CropHybridizationSimulator hybrid = *crops[0] + *crops[1];

    cout << "Parent Crop 1:" << endl;
    printCropDetails(*crops[0]);
    cout << "\nParent Crop 2:" << endl;
    printCropDetails(*crops[1]);
    cout << "\nParent Crop 3:" << endl;
    printCropDetails(*crops[2 ]);
    cout << "\nHybrid Crop:" << endl;
    printCropDetails(hybrid);


    cout << "\nComparison Results:" << endl;
    cout << "Hybrid  == Crop 3: " << boolalpha << (hybrid == *crops[2]) << endl;
    cout << "Hybrid  > Crop 3: " << boolalpha << (hybrid > *crops[2]) << endl;
    return 0;
}

void printCropDetails(const CropHybridizationSimulator& crop) {
    cout << "Crop Details:" << endl;
    cout << "Height: " << crop.getHeigth() << endl;
    cout << "Yield: " << crop.getYield() << endl;
    cout << "Drought Resistance: " << crop.getDroughtResistance() << endl;
    cout << "Overall Score: " << crop.getScore() << endl;
}
