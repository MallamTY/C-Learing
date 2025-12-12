#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{
    friend void changeData(Rectangle& rect);
    friend void printData(Rectangle& rect);
    friend class RectangleHerlper;
    private:
        double length;
        double width;

    public:
        Rectangle();
        Rectangle(double length, double width);
        double getLength() const;
        double getWidth() const;
        void setLength(double length);
        void setWidth(double length);
        double area() const;
        double perimeter() const;
};


#endif