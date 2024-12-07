#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;

    cin >> x;

    if (a[1] == 0)
    {
        a[1] = 0;
    }
    else
    {
        cout << -1;
    }

    cout << x << " ";

    return 0;
}