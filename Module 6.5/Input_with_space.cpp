#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; // dynamacally length increase
    // cin >> s;
    getline(cin, s);       // getline input with space
    int length = s.size(); // string length

    char target[] = "phitron";
    int targetIndex = 0; // Index for target sequence "phitron"

    // Iterate through the string s
    for (int i = 0; i < length; i++)
    {
        if (s[i] == target[targetIndex])
        {
            targetIndex++; // Move to the next character in "phitron"
        }
      
    }
      cout << target << endl;
    // if (targetIndex == 7)
    // {

    // }
    // else
    // {
    //     cout << target << endl;
    // }
    return 0;
}