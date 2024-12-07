#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
   cout << &a << endl;  //a er address print korbe

  int* a_ptr = &a;   //akane a ar address tike pointer er modde raklam
  cout << a_ptr << endl;  // a er address ti print korbe
    return 0;
}