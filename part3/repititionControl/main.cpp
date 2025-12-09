#include <iostream>

using namespace std;

int main() {
    int counter = 0;

    while (counter < 10)
    {
        cout << "Counter: " << counter << endl;
        counter++;
    }

    // Do-while loop example

    int doCounter = 11;

    do {
        cout << "Do-While Counter: " << doCounter << endl;
        doCounter++;
    }
    while (doCounter <= 12);
    {
        cout << "This will print once even though the condition is false." << endl;

    }

    // For loop example
    for (int i = 0; i < 5; i++)
    {
        cout << "For Loop Counter: " << i << endl;
    }


    int input = 0;

    cout << "Enter another number (negative to quit):";
    cin >> input;

    while (input >= 0)
    {
        cout << "You entered: " << input << endl;
        cout << "Enter another number (negative to quit): ";
        cin >> input;
    }
    
    
    return 0;
    
}