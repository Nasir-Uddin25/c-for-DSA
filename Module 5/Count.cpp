#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int digit = s[i] - '0';
        sum = sum + digit;
    }
    cout << sum << endl;
    return 0;
}