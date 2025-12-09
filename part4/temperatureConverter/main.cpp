#include <iostream>
using namespace std;


int main () {
    const int NUM_OF_DAYS = 7;
    array<double, NUM_OF_DAYS> tempInFarenheit;

    for (int i = 0; i < NUM_OF_DAYS; i++)
    {
        cout << "Please enter the temperature in farenheit for day "
        << (i +1) << endl;
        cin >> tempInFarenheit[i];
    }

    for (double tempF : tempInFarenheit)
    {
        double tempC = (tempF - 32) * 5.0 / 9;
        cout << "F : " << tempF << "-> C: " << tempC <<endl;
    }
    
    
    return 0;
}