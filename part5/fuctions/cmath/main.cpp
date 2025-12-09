#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int powResult = pow(2, 3);
    int squareResult = sqrt(25);
    int ceilResult = ceil(56.4);
    int floorResult = floor(56.4);
    int log2512 = log2(512);

    cout<<"Result of powResult is: "<< powResult<< endl;
    cout<<"Result of squareResult is: "<< squareResult<< endl;
    cout<<"Result of ceilResult is: "<< ceilResult<< endl;
    cout<<"Result of floorResult is: "<< floorResult<< endl;
    cout<<"Result of log2 of 512   is: "<< log2512<< endl;
    return 0;
}