#include <iostream>


int main() {
    int a = 10;
    int b = 20;

    // Addition
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;

    // Subtraction
    int difference = b - a;
    std::cout << "Difference: " << difference << std::endl;

    // Multiplication
    int product = a * b;
    std::cout << "Product: " << product << std::endl;

    // Division
    double division = b / a;
    std::cout << "Division: " << division << std::endl;

    // Modulus
    int remainder = b % a;
    std::cout << "Modulus: " << remainder << std::endl;

    a += 40;
    std::cout << "New value of a after a += 40: " << a << std::endl;

    return 0;
}