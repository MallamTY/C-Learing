#include <iostream>
#include <stdexcept>
using namespace std;


void processPositive(int num);

void doSomething(int num);

int main() {

    int input;

    try
    {
        cout<<"Enter a number to process: ";
        cin >> input;

        doSomething(input);
        cout<<"Number was processed"<<endl;
    }
    catch(const invalid_argument& error)
    {
        cout<<"Main said there is an error"<<endl;
        cout<<error.what()<<endl;
    }
    
    return 0;
}


void processPositive(int num){
    cout<<"Welcome to the positive number proccessor"<<endl;
    if (num >= 0)
    {
        cout<<"Positive number passed"<<endl;
    }
    else {
        throw invalid_argument("Negative number passed and can not be processed");
    }
    
}
void doSomething(int num) {
    
    try
    {
       processPositive(num);

    cout<<"Do something process the number"<<endl;
    }
    catch(const invalid_argument& error)
    {
        cout<<"Do something says there is an error"<<endl;
        throw;
    }
    


};