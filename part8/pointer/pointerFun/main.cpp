#include <iostream>

using namespace std;

int main(){
    int myInteger = 543;
    int* myIntegerPtr = &myInteger;

    cout<<"Value for integer is: "<<myInteger<<endl;
    cout<<"Pointer holds value: "<<myIntegerPtr<<endl;
    cout<<"Pointer dereferneced: "<<*myIntegerPtr<<endl;
    cout<<"Value for integer is ---->>>>: "<<myInteger<<endl;
    *myIntegerPtr = 3000;
    cout<<"Value for integer is now: "<<myInteger<<endl;
    return 0;
}