#include "Triangle.h"

using namespace shapes;

Triangle::Triangle()
{
    base = 0;
    height = 0;
}

Triangle::Triangle(float b, float h)
{
    base = b;
    height = h;
}

Triangle::~Triangle() {}

void Triangle::setBase(float b)
{
    base = b;
}

void Triangle::setHeight(float h)
{
    height = h;
}

float Triangle::getBase()
{
    return base;
}

float Triangle::getHeight()
{
    return height;
}