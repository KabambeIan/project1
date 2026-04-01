#include <iostream>
using namespace std;

int main()
{
    // declaer pointer and intialize it
    // so rjat it does not store a rando address

    int *ppointer = nullptr;

    int integerVar = 5;

    /// assign pointer to address of object
    ppointer = &integerVar;

    // output the value of integervar
    cout << "integerVar:" << integerVar << endl;

    // output of the address of integerVar
    cout << " Adress of integerVar :" << &integerVar << endl;

    // output the address assuged to ppointer

    cout << "ppointer :" << ppointer << endl;

    // output the address of ppointer
    cout << "address of ppointer " << &ppointer << endl;

    return 0;
}