#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin >> s;         //cin input without space
    getline(cin, s); // getline input with space
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            cout << s[i];
        }
        
    }

    
    return 0;
}