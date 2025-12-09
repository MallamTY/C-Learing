#include <iostream>
#include <string>

using namespace std;


int main(){
    string* myIntegerPtr = new string("Temitayo");

    cout<<myIntegerPtr<<endl;
    cout<<*myIntegerPtr<<endl;
    delete myIntegerPtr;
    myIntegerPtr = nullptr;
    return 0;
}