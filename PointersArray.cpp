#include <iostream>
using namespace std;

int main()
{
    int numbersArray[5];
    int *ppointer = nullptr;

    ppointer = numbersArray;
    *ppointer = 10;

    ppointer = &numbersArray[1];
    *ppointer = 20;

    ppointer = &numbersArray[2];
    *ppointer = 30;

    ppointer = &numbersArray[3];
    *ppointer = 40;

    ppointer = &numbersArray[4];
    *ppointer = 50;

    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ", ";
    }

    return 0;
}