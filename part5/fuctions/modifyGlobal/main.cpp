#include <iostream>
using namespace std;


void modifyGlobal();

int counter = 0;
int main() {
    cout<<"Counter value before loop is: "<<counter<<endl;
    for (int i = 0; i < 100; i++)
    {
        modifyGlobal();
    }
    cout<<"Counter value after loop is: "<<counter<<endl;
    return 0;
}

void modifyGlobal(){
    counter++;
};