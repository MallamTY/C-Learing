#include "Rectangle.h"
#include <iostream>



int main() {
    Rectangle r;

    r.setLength(3.5);
    r.setWidth(5.9);
    double area = r.arear();

    cout<<"The length of the rectangle r is: "<<r.getLength()<<endl;
    cout<<"The width of the rectangle r is: "<<r.getWidth()<<endl;
    cout<<"The area of the rectangle r is: "<<r.arear()<<endl;
    return 0;
}