#include <iostream>
using namespace std;


int main() {
    double billAmount;
    double tipPercentage;
    double tipAmount;
    double totalAmount;
    
    cout << "Enter the bill amount: ";
    cin >> billAmount;
    cout << "Enter the tip percentage (e.g., 15 for 15%): ";
    cin >> tipPercentage;
    tipAmount = (tipPercentage / 100) * billAmount;
    totalAmount = billAmount + tipAmount;
    cout << "Tip Amount: $" << tipAmount << std::endl;
    cout << "Total Amount: $" << totalAmount << std::endl;

    return 0;

}