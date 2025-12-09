#include <iostream>
#include <memory>
#include <utility>

using namespace std;

int main(){
    // Smart pointer using unique ptr
    //unique_ptr<double> myDoublePtr(new double);

    // Smart pointer using make ptr
    unique_ptr<double> myDoublePtr = make_unique<double>();

    *myDoublePtr = 3.142;

    cout << "Double value: "<< *myDoublePtr << endl;

    // Make pointer with array
    /*
    const int ARR_SIZE = 5;
    auto myArray = make_unique<int[]>(ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
    {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < ARR_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }
    */


    // Changing ownership of object in ptr.

    unique_ptr<double> newPtr = std::move(myDoublePtr);

    cout << "New Ptr value: "<< *newPtr << endl;
    

}