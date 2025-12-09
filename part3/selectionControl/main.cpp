#include <iostream>
using namespace std;
int main() {

    int age = 25;

    cout << "You are " << age << " years old." << endl;

    if (age > 16)
    {
        cout << "You are old enough to drive." << endl;
    }
    else
    {
        cout << "You are not old enough to drive." << endl;
    }
    
    return 0;
}