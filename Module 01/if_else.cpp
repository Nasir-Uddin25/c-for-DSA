#include <iostream>
using namespace std;
int main()
{
    // If value is divisible by 2.Then, Print Even. Otherwise, Print Odd
    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}