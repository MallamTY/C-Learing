#include <iostream>
using namespace std;


void printValue(int value);
int getNumber();
int adder(int firstNum, int secondNum);

int main() {
    int number = getNumber();
    printValue(number);

    printValue(adder(100, 50));
    
    return 0;
}
void printValue(int value) {
    cout<<"The number is: "<<value<<endl;
};

int getNumber () {
    return 10;
}

int adder (int firstNum, int secondNum) {
    return firstNum + secondNum;
}