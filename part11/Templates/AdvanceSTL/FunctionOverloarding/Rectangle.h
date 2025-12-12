#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle{
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
        
        // Ovreload function
        bool operator==(Rectangle& other) const;
        bool operator!=(Rectangle& other) const;
        Rectangle operator+(Rectangle& other) const;
        void operator=(const Rectangle& other);
};


#endif