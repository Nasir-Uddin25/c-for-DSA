#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[5] = {100, 5, 0, 4, 1};
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int mx = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        mx = max(a[i], mx);
        // if (a[i] > mx)
        // {
        //     mx = a[i];
        // }
    }
    cout << mx << endl;

    return 0;
}