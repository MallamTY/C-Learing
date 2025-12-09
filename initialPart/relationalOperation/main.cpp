#include <iostream>

using namespace std;

int main() {
    cout << boolalpha;
    int age = 20;

    bool isAdult = age >= 18;

    std::cout << "Is adult: " << isAdult << std::endl;
    return 0;
}