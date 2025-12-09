#include <iostream>
using namespace std;


void noCost();
void cp2ndcd();
void ncp2cd();
void cp2cd();



int main() {
    noCost();
    cout<<endl;
    cp2ndcd();
    cout<<endl;
    ncp2cd();
    cout<<endl;
    cp2cd();
    cout<<endl;
    return 0;
}

//"Non-conat pointer to non-const data"
void noCost(){
    int* intPtr = new int(50);
    cout<<"\t Original value "<<*intPtr<<endl;

    *intPtr = 100;
    cout<<"\t Changed value "<<*intPtr<<endl;

    delete intPtr;

    intPtr = new int(125);
    cout<<"\t New entry value "<<*intPtr<<endl;

    delete intPtr;
}

//Const pointer 2 non-const data
void cp2ndcd(){
    cout<<"\t In cp2ndcd"<<endl;

     int* const intPtr = new int(500);
    cout<<"\t Original value "<<*intPtr<<endl;

    *intPtr = 550;
    cout<<"\t Changed value "<<*intPtr<<endl;

    delete intPtr;

    //intPtr = new int(125); (Commented out because pointer is constant and can not be modified. Uncomment to see the error);
}

//Non-const pointer to const data
void ncp2cd(){

    cout<<"\t In ncp2cd"<<endl;

     const int* intPtr = new int(50);
    cout<<"\t Original value "<<*intPtr<<endl;

    //*intPtr = 100; (Commented out because data can't be modified)

    delete intPtr;

    intPtr = new int(125);

    cout<<"\t Changed value "<<*intPtr<<endl;

    delete intPtr;

}

//Const pointer to const data
void cp2cd(){
     cout<<"\t In cp2cd"<<endl;

     const int* const intPtr = new int(500000);
     cout<<"\t Original value "<<*intPtr<<endl;

    //*intPtr = 100; (Commented out because data can't be modified i.e. data is constant)

    //intPtr = new int(125); (Commented out because pointer is also constant). Please be informed that new(125) returns the reference to the data

    delete intPtr;
}

