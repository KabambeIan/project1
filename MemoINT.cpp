#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Dynamically allocate memory
    int *num = new int;
    string *text = new string;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> *num;

    cout << "Enter a string: ";
    cin.ignore(); // clear newline left in buffer
    getline(cin, *text);

    // Output values
    cout << "You entered integer: " << *num << endl;
    cout << "You entered string: " << *text << endl;

    // Free memory
    delete num;
    delete text;

    return 0;
}
