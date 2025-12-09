#include <iostream>
#include <stdexcept>
#include "Person.h"
using namespace std;


int main() {
    try{
        Person person1("Temitayo");
        Person person2("Sosanya");
        Person person3("John");

        cout<<person1.getName()<<endl;
        cout<<person2.getName()<<endl;
        cout<<person3.getName()<<endl;
    }
    catch(const runtime_error& error){
        cout<<error.what()<<endl;
    }
}