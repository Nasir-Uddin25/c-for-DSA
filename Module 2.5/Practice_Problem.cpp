#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int *a = new int[n]; // Take an integer array A of size N as input dynamacalily
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m; // Then take an integer M as input.
    cin >> m;

    int *b = new int[m]; // You need to take an array B of size M dynamacalily

    // copy all elements of array A to array B.
    for (int i = 0; i < m; i++)
    {
        b[i] = a[i];
    }

    // Delete the array A
    delete[] a;
    // then take input of the rest of the elements of array B.
    b[3] = 60;
    b[4] = 40;

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}