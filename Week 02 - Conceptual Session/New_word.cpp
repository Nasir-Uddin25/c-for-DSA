#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    if (s.find("Egypt") != -1)
    {
        cnt++;
    }
    else if (s.find("egypt") != -1)
    {
        cnt++;
    }
    else if (s.find("eGyP") != -1)
    {
        cnt++;
    }
    else
    {
        cout << cnt << endl;
    }

    return 0;
}