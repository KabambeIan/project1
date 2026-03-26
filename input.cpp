#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Function to reverse the string
string Reverse(string str)
{
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}

int main()
{
    string fileData;

    // Open file
    ifstream file("data.txt");

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read file content into fileData
    getline(file, fileData);
    file.close();

    cout << "Original Text: " << fileData << endl;

    // Count vowels
    int vowelCount = 0;
    for (char ch : fileData)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // Count words
    int wordCount = 0;
    for (int i = 0; i < fileData.length(); i++)
    {
        if (fileData[i] == ' ')
        {
            wordCount++;
        }
    }
    wordCount += 1; // last word
    cout << "Number of words: " << wordCount << endl;

    // Reverse string
    cout << "Reversed Text: " << Reverse(fileData) << endl;

    // Capitalize second letter of each word
    string modified = fileData;
    bool newWord = true;

    for (int i = 0; i < modified.length(); i++)
    {
        if (newWord && isalpha(modified[i]))
        {
            // first letter of word
            newWord = false;
        }
        else if (!newWord && isalpha(modified[i]))
        {
            // second letter of word → capitalize
            modified[i] = toupper(modified[i]);
            newWord = true; // reset for next word
        }

        if (modified[i] == ' ')
        {
            newWord = true;
        }
    }

    cout << "Second letter capitalized: " << modified << endl;

    return 0;
}