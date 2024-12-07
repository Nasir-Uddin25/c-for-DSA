#include <iostream>
using namespace std;

int main()
{
    // Ternary operator
    int x;
    cin >> x;
    (x % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}