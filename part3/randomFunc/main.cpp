#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {

    srand(time(nullptr));

    int val1 = rand() % 10;
    int val2 = rand() % 10 + 1;

    cout << "Random value between 0 and 9: " << val1 << endl;
    cout << "Random value between 1 and 10: " << val2;
    return 0;
}