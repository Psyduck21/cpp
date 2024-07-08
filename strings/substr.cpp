#include <iostream>
#include <string>

using namespace std;
/*
 *string::npos is introduce in this program
 *string::npos is a static member constant value with the greatest possible value for an element of type size_t.
 *It bassically means that the element is not found in the string
 */
/**
 * Function to count the frequency of a substring within a given string.
 * @mainStr The main string in which to search for the substring.
 * @subStr The substring to find within the main string.
 * The number of times the substring appears in the main string.
 */
int countSubstringFrequency(const string &mainStr, const string &subStr)
{
    int count = 0;
    size_t pos = mainStr.find(subStr);

    // Loop until no more occurrences are found
    while (pos != string::npos)
    {
        ++count;
        pos = mainStr.find(subStr, pos + subStr.length());
    }

    return count;
}

int main()
{
    string mainStr;
    string subStr;

    // Prompt user for the main string
    cout << "Enter the main string: ";
    getline(cin, mainStr);

    // Prompt user for the substring
    cout << "Enter the substring to find: ";
    getline(cin, subStr);

    // Calculate the frequency of the substring
    int frequency = countSubstringFrequency(mainStr, subStr);

    // Output the result
    cout << "The substring \"" << subStr << "\" appears " << frequency << " times in the main string." << endl;

    return 0;
}
