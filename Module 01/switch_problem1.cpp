#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    // If the value is divisible by 2 print Even number. Otherwise, print Odd number
    switch (x % 2)
    {
        case 0:
        cout << "Even";
        break;

        case 1:
        cout << "Odd";
        break;
    }
    return 0;
}