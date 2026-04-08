#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    // 🔹 First object (using setters)
    Rectangle rect1;

    float length1, width1;

    cout << "Enter length for rectangle 1: ";
    cin >> length1;

    cout << "Enter width for rectangle 1: ";
    cin >> width1;

    rect1.setLength(length1);
    rect1.setWidth(width1);

    cout << "Area of rectangle 1: " << rect1.calculateArea() << endl;

    // 🔹 Second object (using overloaded constructor)
    float length2, width2;

    cout << "\nEnter length for rectangle 2: ";
    cin >> length2;

    cout << "Enter width for rectangle 2: ";
    cin >> width2;

    Rectangle rect2(length2, width2); //  constructor used here

    cout << "Area of rectangle 2: " << rect2.calculateArea() << endl;

    return 0;
}