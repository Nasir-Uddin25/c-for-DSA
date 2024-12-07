#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;

    // int a[n];
    for (int i = 1; i <= t; i++)
    {
        Student a[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id >> a[i].name >> a[i].section >> a[i].total_marks;
        }

        // int mx = INT_MIN;
        Student mx;
        mx.total_marks = INT_MIN;
        for (int i = 0; i < 3; i++)
        {
            // cout << a[i].id << " " << a[i].name << " " << a[i].section << " " << a[i].total_marks << endl;
            if (a[i].total_marks > mx.total_marks)
            {
                mx = a[i];
            }
        }
        cout << mx.id << " " << mx.name << " " << mx.section << " " << mx.total_marks << endl;
    }

    return 0;
}