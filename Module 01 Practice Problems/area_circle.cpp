#include <iostream>
#include <iomanip> //you can use function setprecision that are in #include<iomanip> library
using namespace std;
int main()
{
    // Use the data type double for this problem.
    double R;
    cin >> R;

    // Given a number R calculate the area of a circle using the following formula: Area = π * R2.

    double Area = (double)(3.141592653) * R * R;

    cout << fixed << setprecision(9) << Area;
    return 0;
}