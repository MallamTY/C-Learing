/** Friend function breaks the rules of encapsulation by allowing
non-member functios to access private and protected members of a class
**/

#include "Rectangle.h"
#include "RectangleHerlper.h"
#include <iostream>


using namespace std;

void changeData(Rectangle& rect);
void printData(Rectangle& rect);

int main(){
    Rectangle r1(20,35);
    RectangleHerlper helper;
    cout << "r1 area: " << r1.area() << endl;

    cout << endl;
    cout << "Printing rectangle data directly with the printData friend function" << endl;
    printData(r1);
    cout << endl;
    changeData(r1);
    cout << "Changed r1: " << r1.area() << endl;  
    helper.modifyRectangle(r1);
    cout << "After helper, area is: " << r1.area() << endl;
    return 0;
}

void changeData(Rectangle& rect){
    rect.length = 100;
    rect.width = 100;
}
void printData(Rectangle& rect) {
    cout <<"The width of the rectangle is: " << rect.width << endl;
    cout <<"The length of the rectangle is: " << rect.length << endl;
}