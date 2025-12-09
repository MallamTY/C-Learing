#include <iostream>
using namespace std;


int main() {
    array<int, 10>myIntArray;

    for (int i = 0; i < myIntArray.size(); i++)
    {
        myIntArray[i] = i * 2;
    }

    for(int value: myIntArray) {
        cout << value << endl;
    }
    
    return 0;
}