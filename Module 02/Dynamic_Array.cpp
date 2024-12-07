/*Static Array input and output by C++*/
/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
} */

/*Dynamic Array input and output by C++*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}