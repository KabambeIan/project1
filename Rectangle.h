#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle();                 // default constructor
    Rectangle(float l, float w); //  overloaded constructor
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);

    float getLength();
    float getWidth();

    float calculateArea();
};

#endif