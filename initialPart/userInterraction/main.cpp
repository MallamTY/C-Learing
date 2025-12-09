#include <iostream>
#include <string>
using namespace std;



int main() {
    string fullName;
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << "years old" << endl;

    cin.get();
    cout << "Enter your full name: ";
    getline(cin, fullName);
    return 0;
}