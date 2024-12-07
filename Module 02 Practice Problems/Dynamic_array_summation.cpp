#include <bits/stdc++.h>
using namespace std;
int main()
{
    // dynamic array declare using pointers
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    int add = abs(sum);
    cout << add << " ";

    return 0;
}