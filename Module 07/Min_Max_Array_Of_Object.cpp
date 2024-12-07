#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;

    // int arr[n];

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // Minimum Marks
    // int minimum = INT_MAX;
    // Student mn;
    // mn.marks = INT_MAX;

    // Maximum Marks
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (a[i].marks < minimum)
        // {
        //     minimum = a[i].marks;
        // }

        // mn = min(a[i].marks, mn.marks);

        // Minimum Marks
        // if (a[i].marks < mn.marks)
        // {
        //     mn = a[i];
        // }

        // Maximum Marks
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    //cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " <<mx.roll << " " <<mx.marks << endl;
    return 0;
}