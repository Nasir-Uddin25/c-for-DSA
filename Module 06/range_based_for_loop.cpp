#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    // cout << s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }

    //using range based for loop
    for(char ch : s)
    {
        cout << ch;
    }
    return 0;
}