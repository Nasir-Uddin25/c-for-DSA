#include <bits/stdc++.h>
using namespace std;

int *fun()
{
     //int a[5];       //Static Array declare . function thake return kora value ar thaka na

    int *a = new int[5];        //Dyanamic array declare
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int *x = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] <<" ";
    }
    return 0;
}