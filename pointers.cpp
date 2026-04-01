#include <iostream>
using namespace std;

int main()
{
    int firstValue;
    int secondValue;

    int *ppointer = nullptr;
    // assign pointer with address of firstValue
    ppointer = &firstValue;
    *ppointer = 10; // indirection
                    // assign ponter with the address of secondValue
    ppointer = &secondValue;
    *ppointer = 20;

    cout << "firstValue is: " << firstValue << "\n";
    cout << "secondValue is: " << secondValue << "\n";

    return 0;
}
