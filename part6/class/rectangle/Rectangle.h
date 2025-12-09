#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
    public: 
        Rectangle();
        Rectangle(double length, double width);
        double getLength() const;
        double getWidth() const;
        void setLength(double length);
        void setWidth(double width);
        double arear() const;
    private:
        double length;
        double width;
};

#endif
