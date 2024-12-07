// C++ program to demonstrate ceil function

#include <iostream>
#include <cmath>
using namespace std;

// Driver function
int main()
{
    // using ceil function which return
    // floor of input value
    double a, b;
    cin >> a >> b;

    double d = a / b;

    cout << "floor is: " << floor(d) << endl;
    cout << "Ceil is : " << ceil(d) << endl;
    cout << "Round is : " << ceil(d) << endl;

    return 0;
}