#include "Rectangle.h"
#include <iostream>

using namespace std;


int main() {
    Rectangle rect1(100, 30);
    Rectangle rect2(4, 100);
    Rectangle rect3(10, 30);
    Rectangle resultRect;

    resultRect = rect1 + rect2;

    cout << "rect1 == rect3 ?" << boolalpha << (rect1 == rect3) << endl;
    cout << "rect1 != rect2 ?" << boolalpha << (rect1 != rect2)<< endl;

    cout << "ResultRect: "
        << resultRect.getLength() <<" * "
        << resultRect.getWidth() << " = "
        << resultRect.area() << endl;
    
    cout << "area rect1 < area rect2 ? " << boolalpha << (rect1 < rect2) << endl;

    return 0;
}