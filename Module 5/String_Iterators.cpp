#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello world";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // cout << *s.begin() << endl; // s.begin() -> pointer to the first element.
    // cout << *(s.end()-1) << endl;   //s.end() -> pointer to the next element after the last element of the string.

    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it <<endl;
    // }

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}