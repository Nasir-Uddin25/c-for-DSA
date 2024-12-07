#include <bits/stdc++.h>
using namespace std;
int main()
{
    // problem approach
    // string length

    int t;
    cin >> t;

    for (int i = 1; i <=t; i++)
    {
        string s;
        //cin.ignore();
        cin >> s;

        int length = s.size();
        if (length > 10)
        {
            cout << s[0] << length - 2 << s[length - 1] <<endl;
        }
        else
        {
            cout << s <<endl;
        }
    }

    return 0;
}