#include <iostream>

using namespace std;

void valueChanger(int num);
void valueChanger2(int& num);

int main () {
    int number = 20;

    valueChanger(number);

    cout<<"Before calling valueChanger2, number is: "<<number<<endl;

    valueChanger2(number);
    cout<<"Afyer calling valueChanger2, number is: "<<number<<endl;
    
    return 0;
}

void valueChanger(int num) {
    num = 50;
    cout<<"Inside the valueChange, num is: "<<num<<endl;
}

void valueChanger2(int& num){
    num = 150;
    cout<<"Inside the valueChange2, num is: "<<num<<endl;
}