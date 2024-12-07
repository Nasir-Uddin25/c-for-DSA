#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string S, T;
        cin >> S >> T;

        int len_S = S.size();
        int len_T = T.size();

        int max_len;
        if (len_S > len_T)
        {
            max_len = len_S;
        }
        else
        {
            max_len = len_T;
        }

        for (int i = 0; i < max_len; i++)
        {
            if (i < len_S)
            {
                cout << S[i];
            }
            if (i < len_T)
            {
                cout << T[i];
            }
        }
        cout << endl;
    }
    return 0;
}