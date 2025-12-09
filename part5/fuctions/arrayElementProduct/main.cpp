#include <iostream>

using namespace std;

int productArray(array<int, 6> myArray);
void productArray(array<int, 6> myArray, int& result);

int main() {
    array<int, 6> myArray = {1,2,3,4,5,6};
    // int product = productArray(myArray);
    int product;
    productArray(myArray, product);
    cout<<"The product of the array elements is: "<< product<<endl;
    return 0;
}


int productArray(array<int, 6> myArray){
    int product = 1;
    for (int i = 0; i < myArray.size(); i++)
    {
        product *= myArray[i];
    }

    return product;
    
}

void productArray(array<int, 6> myArray, int& result){
    result = 1;
    for (int i = 0; i < myArray.size(); i++)
    {
        result *= myArray[i];
    }

    
}