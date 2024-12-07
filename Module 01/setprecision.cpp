#include <iostream>
#include <iomanip> //setprecision এর জন্য ইনপুট আউটপুট  ম্যানিপুলেশন হেডার ফাইল ইনকুল্ড করি।
using namespace std;

int main()
{
    // Control floating point number using setprecision
    double d = 45.569986665;
    // printf("%.8lf", d);

    cout << fixed << setprecision(8) << d << endl; // এখানে সিআউট এর পর ফিক্সড , সেটপ্রেসেশন সাইজ , ভেরিয়েবল ভেলু
    return 0;
}