#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Square\n";
        cout << "2. Triangle\n";
        cout << "3. Circle\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            float side;
            cout << "Enter side: ";
            cin >> side;

            shapes::Square s(side);
            cout << "Area: " << Area::squareArea(s) << endl;
        }

        else if (choice == 2)
        {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;

            shapes::Triangle t(base, height);
            cout << "Area: " << Area::triangleArea(t) << endl;
        }

        else if (choice == 3)
        {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;

            shapes::Circle c(radius);
            cout << "Area: " << Area::circleArea(c) << endl;
        }

    } while (choice != 4);

    return 0;
}