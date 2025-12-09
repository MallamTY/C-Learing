#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main(){
    queue<string> names;

    names.push("John");
    names.push("Sally");
    names.push("Bob");
    names.push("Sam");
    names.push("Ali");
    names.push("Karen");

    cout<<"The front person on the queue is: "<<names.front()<<endl;
    names.pop();
    cout<<"Queue "<<(names.empty() ? "is" : "is not")<<" empty"<<endl;
    return 0;
}