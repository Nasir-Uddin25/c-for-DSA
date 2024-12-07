#include <bits/stdc++.h>
using namespace std;
int main()
{
   

   
        int n = 5, s = 10;
        // cin >> n >> s;

        int arr[10] = {1, 2, 3, 4, 5};

        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        bool found = false;
        for (int i = 0; i < n - 2 && !found; i++)
        {
            for (int j = i + 1; j < n - 1 && !found; j++)
            {
                for (int k = j + 1; k < n && !found; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == s)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    

    return 0;
}
