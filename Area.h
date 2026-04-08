#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area
{
public:
    static float squareArea(shapes::Square s);
    static float triangleArea(shapes::Triangle t);
    static float circleArea(shapes::Circle c);
};

#endif