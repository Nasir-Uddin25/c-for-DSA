#include <bits/stdc++.h>
using namespace std;

bool containsJessica(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s;
    getline(cin, s);

    if (containsJessica(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}