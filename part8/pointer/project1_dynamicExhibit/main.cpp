#include "exhibit.h"
#include <iostream>

using namespace std;


int main(){
    int EXHIBIT_LENGTH = 3;
    Exhibit* exhibitPtr[EXHIBIT_LENGTH];

    exhibitPtr[0] = new Exhibit("Efunsetan Aniwura", 32, 45.423);
    exhibitPtr[1] = new Exhibit("Ooni Of Ife", 545, 45232.423);
    exhibitPtr[2] = new Exhibit("Ayinla Omoowura", 76, 45433.423);


    for (int i = 0; i < EXHIBIT_LENGTH; i++)
    {
        if (i == 0)
        {
            cout<<endl;
        }
        
        cout<<"Exhibit: "<<exhibitPtr[i]->getName()<<endl;
        cout<<"\tDisplay Size: "<<exhibitPtr[i]->getDisplaySize()<<endl;
        cout<<"\tRoom Number (sq ft): "<<exhibitPtr[i]->getRoomNumber()<<endl;
        cout<<endl;
        cout<<"/////////////////// END EXHIBIT ("<<exhibitPtr[i]->getName()<<") ///////////////////"<<endl;
        cout<<endl;
        delete exhibitPtr[i];
        exhibitPtr[i] = nullptr;
    }
    

    return 0;
}