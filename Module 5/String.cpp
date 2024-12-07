#include <bits/stdc++.h>
using namespace std;
int main()
{
    // দুটি ‍স্ট্রিং এর দৈর্ঘ্য বের করা।
    //  দুটি স্ট্রিংকে জোড়া দেওয়া
    //  দুটি স্ট্রিং এর প্রথম বর্ণ পরিবর্তন করা
    string a, b;
    cin >> a >> b;

    int len_a = a.size();
    int len_b = b.size();

    cout << len_a << " " << len_b << endl;
    cout << a << b <<endl;

    swap(a[0], b[0]);
    cout << a <<" " <<b;
    return 0;
}