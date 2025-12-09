#include "Swapper.h"
#include <iostream>
#include <string>


using namespace std;


int main() {
    Swapper<int> intSwapper(5, 16);
    Swapper<string> stringSwapper("Temitayo", "Sosanya");

    cout<<"Before Swap"<<endl;
    cout<<"\t"<<"First Integer : " << intSwapper.getFirst() << endl;
    cout<<"\t"<<"Seond Integer : " << intSwapper.getSecond() << endl;
    cout<<"\t"<<"First String : " << stringSwapper.getFirst() << endl;
    cout<<"\t"<<"Second String : " << stringSwapper.getSecond() << endl;

    intSwapper.swap();
    stringSwapper.swap();

    cout<<"\nAfter Swap"<<endl;
    cout<<"\t"<<"First Integer : " << intSwapper.getFirst() << endl;
    cout<<"\t"<<"Seond Integer : " << intSwapper.getSecond() << endl;
    cout<<"\t"<<"First String : " << stringSwapper.getFirst() << endl;
    cout<<"\t"<<"Second String : " << stringSwapper.getSecond()<< "\n"<< endl;

    cout<<"\nThe smaller value is: "<<intSwapper.getSmaller(534,3434323)<<endl;
    return 0;
}