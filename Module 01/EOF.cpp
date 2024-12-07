#include <iostream>
using namespace std;

int main()
{
    // EOF End Of File হচ্ছে যতক্ষণ  পর্যন্ত ইনপুট আছে ততক্ষণ পর্যন্ত আউটপুট দেখাবে

    int x;
    while (cin >> x)
    {
        cout << x << endl;
        if (x == 1999)
        {
            break;
        }
    }

    return 0;
}