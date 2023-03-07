#include <iostream>
#include <string.h>
using namespace std;

// What is?
// -> noon
// Left to Right(read) -> noon
// Right to left(read) -> noon Both cases mai same hai then It is palindrom depending upon the Character uppercase or lowercase scenario
// eg: kadak, racecar, nitin, madam

// Approach-1
// Step-1 Input char array ko dusre array mai copy krdo.
// Step-2 and usko reverse kro
// Steop-3 Dono array ko compare if both are same then True, otherwise false
// Time Complexity O(n)

// Approach-2
// Step-1 Two Pointer approach first and last ko compare kro.
// Step-2 Agar till the end same hai to return true otherwise false
// Time Complexity O(logn)

bool checkPalindrom(char word[])
{
    int start = 0;
    int end = strlen(word) - 1;
    while (start <= end)
    {
        if (word[start] != word[end])
        {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main()
{
    char word[100];
    cin >> word;
    if (checkPalindrom(word))
    {
        cout << "Yes Palindrom";
    }
    else
    {
        cout << "Not a Palindrom";
    }
}
