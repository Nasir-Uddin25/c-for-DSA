#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[100005];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); // asending order
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    cout <<endl;
    sort(a, a + n, greater<int>());  // desending order

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}