#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};
int main()
{

    // Student rahim(11, 10, 4.78);
    // Student karim(1, 10, 5.00);

   

    int r;
    int c;
    double g;
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    // Student karim(r,c,g);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    //cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}