#include <iostream>
using namespace std;
int main()
{
    string myArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Loop through each element of the array
    for (int i = 0; i < 8; i++)
    {
        // Check if the first character of the string is 'B'
        if (myArray[i][0] == 'B')
        {
            cout << myArray[i] << endl;
        }
    }

    return 0;
}