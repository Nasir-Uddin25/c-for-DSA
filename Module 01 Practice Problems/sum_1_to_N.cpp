#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}