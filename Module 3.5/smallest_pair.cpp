#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;

    int a[n + 5];

    int sum, result = INT_MAX;
    for (int cs = 1; cs <= t; cs++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = a[i] + a[j] + j - i;
                result = min(sum, result);
               
            }
        }
    }
    cout << result << endl;

    return 0;
}