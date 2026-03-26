#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter an integer between 5 and 10: ";
    cin >> number;

    // Keep looping until the number is valid
    while (number < 5 || number > 10)
    {
        cout << "Sorry, you entered an invalid number. Please try again." << endl;
        cout << "Enter an integer between 5 and 10: ";
        cin >> number;
    }

    // Once valid, loop ends
    cout << "Your input value " << number << " has been accepted." << endl;

    return 0;
}