#include <iostream>
using namespace std;

// Function for triangle area
void triangleArea()
{
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    double area = 0.5 * base * height;
    cout << "Area of triangle = " << area << endl;
}

// Function for rectangle area
void rectangleArea()
{
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = length * width;
    cout << "Area of rectangle = " << area << endl;
}

// Function for square area
void squareArea()
{
    double side;
    cout << "Enter the side of the square: ";
    cin >> side;

    double area = side * side;
    cout << "Area of square = " << area << endl;
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n=== Area Calculator ===" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation and function calls
        if (choice == 1)
        {
            triangleArea();
        }
        else if (choice == 2)
        {
            rectangleArea();
        }
        else if (choice == 3)
        {
            squareArea();
        }
        else if (choice == 4)
        {
            cout << "Exiting program... Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid input! Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
