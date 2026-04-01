#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // Prompt user for dimensions
    cout << "Enter number of rows (max 3): ";
    cin >> rows;
    cout << "Enter number of columns (max 3): ";
    cin >> cols;

    // Enforce dimension limit
    if (rows > 3 || cols > 3 || rows <= 0 || cols <= 0)
    {
        cout << "Invalid dimensions! Must be between 1 and 3." << endl;
        return 1;
    }

    // Dynamically allocate 2D array
    double **arr = new double *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "Enter values for the array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output values
    cout << "\nArray contents:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
