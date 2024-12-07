#include <bits/stdc++.h>
using namespace std;
int main()
{
    // problem approach
    // find function diea egypt word ti sting ar modde ace kina khuje ber kora
    // erase function egyput word ti muche pela
    // insert function diea space insert kora
    string s;
    cin >> s;

    while (1)
    {
        int pos = s.find("EGYPT");
        // s.replace(7, 5, " ");
        if (pos != -1)
        {
            s.erase(pos, 5);
            s.insert(s.begin() + pos, ' ');
        }
        else
        {
            break;
        }
    }
    cout << s << endl;

    return 0;
}