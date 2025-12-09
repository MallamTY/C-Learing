#include <iostream>
using namespace std;


int main() {
    const int SIZE = 10;
    int arrayHolder[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arrayHolder[i] = (i + 1) * 10;
    }

    for (int value : arrayHolder) {
        cout << value << endl;
    }
    return 0;
}