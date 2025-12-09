#include <iostream>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);

int main(){
    int resultNum = getResult(10, 500);
    string resultString = getResult("Temitayo", "Sosanya");
    int resultCube = getResult(10);
    cout<<"result resultNum is: "<<resultNum<<endl;
    cout<<"result resultString is: "<<resultString<<endl;
    cout<<"result resultCube is: "<<resultCube <<endl;
}

int getResult(int num1, int num2) {
    return num1 + num2;
};
string getResult(string str1, string str2) {
    return str1 + " " + str2;
};
int getResult(int num) {
    return num * num * num;
};