#include <deque>
#include <iostream>

using namespace std;


void printDeque(const deque<int>& deck);


int main(){
    deque<int> myDeck;

    myDeck.push_back(2);
    myDeck.push_back(3433);
    myDeck.push_back(6766);
    myDeck.push_back(890);

    cout<<"First Print"<<endl;
    printDeque(myDeck);

    myDeck.push_front(323);
    myDeck.push_front(12);

    cout<<"Next Print"<<endl;
    printDeque(myDeck);
    return 0;
}


void printDeque(const deque<int>& deck){
    for (int num : deck)
    {
        cout << num << endl;
    }
    cout<<endl;
    
}