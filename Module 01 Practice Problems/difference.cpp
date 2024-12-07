#include <iostream>
using namespace std;
int main()
{
    // Given four numbers A, B, C and D. Print the result of the following equation :
    // X = (A * B) - (C * D)

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = (a * b) - (c * d);
    cout << "Difference = " << x;

    return 0;
}