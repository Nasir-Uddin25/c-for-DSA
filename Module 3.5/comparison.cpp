#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '>')
    {
        // greater than
        (a > b) ? cout << "Right" : cout << "Wrong" << endl;
    }
    else if (s == '<')
    {
        // less than
        (a < b) ? cout << "Right" : cout << "Wrong" << endl;
    }
    else
    {
        // equal to
        (a == b) ? cout << "Right" : cout << "Wrong" << endl;
    }

    return 0;
}