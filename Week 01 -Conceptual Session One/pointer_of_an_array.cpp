#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    // cout << &arr[0] << endl;
    // cout << arr << endl;

    // cout << &arr[1] << endl;
    // cout << arr + 1 << endl;

    // cout << &arr[2] << endl;
    // cout << arr + 2 << endl;

    // cout << &arr[3] << endl;
    // cout << arr + 3 << endl;

    *(arr) = 10;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }
    return 0;
}