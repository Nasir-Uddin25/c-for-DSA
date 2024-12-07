#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // Check Minimum number
    // if (a < b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    // cout << min({56,0, 2,3,98}) <<endl;
    // cout << max({0, 45,3,2,67}) <<endl;

    // int temp = a;
    // a = b;
    // b = temp;

    swap(a, b);
    cout << a << " " << b <<endl;
    
    return 0;
}

