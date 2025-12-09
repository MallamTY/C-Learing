#include <iostream>
#include <string>
using namespace std;


int main(){

    string agentName;
    string alias;
    int age;
    int agentLevel;
    string favoriteGadget;

    cout << "Enter your agent name: ";
    getline(cin, agentName);

    cout << "Enter your alias: ";
    getline(cin, alias);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your agent level: ";
    cin >> agentLevel;
    cin.get();

    cout << "Enter your favorite gadget: ";
    getline(cin, favoriteGadget);

    cout << "\n--- Secret Agent Profile ---\n";
    cout << "Agent Name: " << agentName << endl;
    cout << "Alias: " << alias << endl;
    cout << "Age: " << age << endl;
    cout << "Agent Level: " << agentLevel << endl;
    cout << "Favorite Gadget: " << favoriteGadget << endl;

    return 0;
}