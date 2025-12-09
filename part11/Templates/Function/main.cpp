#include <iostream>
#include <string>

using namespace std;


// double getBetter(int a, int b);
// int getBetter(double a, double b);
// string getBetter(string a, string b);


// Achieving same using templates


template <class T>
T getBetter(T a, T b) {
    return (a>b) ? a : b;
}

int main(){
    double betterDouble = getBetter(3.142, 54.43);
    int betterInt = getBetter(453,23232);
    string betterString = getBetter("Temitayo", "Temitope");

    cout << "Bigger Items: " <<endl;
    cout<<"\t"<<betterDouble<<"\n\t"<<betterInt<<"\n\t"<<betterString<<endl;

    return 0;
}


// double getBetter(int a, int b){
//     return (a > b) ? a : b;
// }
// int getBetter(double a, double b){
//     return (a > b) ? a : b;
// }
// string getBetter(string a, string b){
//     return (a > b) ? a : b;
// }