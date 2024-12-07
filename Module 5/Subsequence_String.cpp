#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int length = s.size();

    string target = "hello";
    int targetIndex = 0; // Index for target sequence "hello"

    // Iterate through for the string
    for (int i = 0; i < length; i++)
    {
        if (s[i] == target[targetIndex])
        {
            targetIndex++; // Move to the next character in "hello"
        }
    }

    if (targetIndex == 5)
    {
        // we found all character
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}