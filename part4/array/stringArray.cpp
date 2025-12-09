#include <iostream>
#include <string>

using namespace std;

int main() {
    const string DAYS_OF_WEEK[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": " << DAYS_OF_WEEK[i] << endl;
    }

    const string names[4] = {"Temitayo", "Ayo", "Bola", "Tunde"};
    for (string name : names) {
        cout << "Name: " << name << endl;
    }

    
    for (auto name : names) {
        cout << "Name: " << name << endl;
    }
    return 0;
}