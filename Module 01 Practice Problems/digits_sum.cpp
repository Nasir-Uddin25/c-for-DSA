#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a = n % 10;
    int b = m % 10;

    cout << a + b;
    return 0;
}