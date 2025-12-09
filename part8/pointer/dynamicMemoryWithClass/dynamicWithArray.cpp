#include <iostream>
using namespace std;


int main() {
    int ARRAY_SIZE;

    cout<<"Please enter the size of your array: ";
    cin >> ARRAY_SIZE;

    int* myArray = new int[10];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout<<myArray[i]<<endl;
    }

    delete [] myArray;
    myArray = nullptr;
    return 0;
}