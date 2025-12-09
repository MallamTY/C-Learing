#include <iostream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    for (int i = 0 ; i <= ARRAY_SIZE; i++) {
        cout << "Element at index " << i << ": " << myArray[i] << endl;
    }
    return 0;
}