#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

//  Overloaded constructor
Rectangle::Rectangle(float l, float w)
{
    length = l;
    width = w;
}

// Destructor
Rectangle::~Rectangle()
{
    // nothing for now
}

void Rectangle::setLength(float l)
{
    length = l;
}

void Rectangle::setWidth(float w)
{
    width = w;
}

float Rectangle::getLength()
{
    return length;
}

float Rectangle::getWidth()
{
    return width;
}

float Rectangle::calculateArea()
{
    return length * width;
}