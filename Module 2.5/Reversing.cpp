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

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        // int temp = a[i];
        // a[i] = a[j];
        // a[j] = temp;
        swap(a[i], a[j]);
    }

    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}