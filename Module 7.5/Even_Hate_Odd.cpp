#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 1; i <= N; ++i)
        {
            cin >> arr[i];
        }
        int min_sum = INT_MAX;

        for (int i = 1; i <= N; ++i)
        {
            for (int j = i + 1; j <= N; ++j)
            {
                int sum = arr[i] + arr[j] + j - i;
                min_sum = min(sum, min_sum);
            }
        }
        cout << min_sum << endl;
    }

    return 0;
}
