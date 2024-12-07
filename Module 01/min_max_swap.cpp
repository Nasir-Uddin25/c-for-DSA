#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    // cout << min({7, 2, 1, 4, 5, 3, 4}) << endl;
    // cout << max({4, 78, 4, 5, 2}) << endl;

    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b << endl;
    return 0;
}