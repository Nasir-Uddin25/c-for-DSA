#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout << &a << endl;

    int *a_ptr = &a;

    cout << a_ptr << endl;
    cout << *a_ptr << endl;

    *a_ptr = 15;
    cout << a <<endl;
    cout << *a_ptr << endl;
}