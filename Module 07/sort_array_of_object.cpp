#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// custom compare function
// return_type is boolean / true or false.
bool cmp(Student l, Student r)
{
   return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
    // if (l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else
    // {
    //     return l.marks > r.marks;
    // }
    // if (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if(l.roll < r.roll)
    //     {
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    // return l.marks >= r.marks;
}

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

    // to do sort array of object using custom compare function
    sort(a, a + n, cmp); // sort(starting , ending)

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}