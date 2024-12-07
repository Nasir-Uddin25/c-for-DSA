#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string s, x;
        cin >> s >> x;

        int length = x.size();
        while (1)
        {

            int pos = s.find(x);

            if (pos != -1)
            {
                s.erase(pos, length);
                s.insert(s.begin() + pos, '#');
            }
            else
            {
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}