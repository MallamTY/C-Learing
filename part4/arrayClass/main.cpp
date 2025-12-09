#include <iostream>

using namespace std;

int main() {
    array<int, 5> myArray = {0,1};
    for (int a : myArray) {
        cout <<"Number is: " << a << endl;
    }

    myArray[3] = 5;
    myArray[4] = 76;

    cout << "Array is of size: " << myArray.size() << endl;
}