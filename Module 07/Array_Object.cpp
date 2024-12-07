#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    // Constructor
    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};
int main()
{
    // Student rakib;
    // rakib.name = "Rakib Ahmed";
    // rakib.roll = 10;
    // rakib.marks = 95;

    // cout << rakib.name << " " << rakib.roll << " " << rakib.marks << endl;
    // Student rakib("Rakib Ahmed", 10, 95);
    // Student sakib("Sakib Hossain", 20, 85);
    // Student akib("Akib Ahmed", 24, 65);

    // cout << rakib.name << " " << rakib.roll << " " << rakib.marks << endl;
    // cout << sakib.name << " " << sakib.roll << " " << sakib.marks << endl;
    // cout << akib.name << " " << akib.roll << " " << akib.marks << endl;
    int n;
    cin >> n;

    // int a[n];
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" " <<a[i].roll <<" " <<a[i].marks <<endl;
    }
    return 0;
}