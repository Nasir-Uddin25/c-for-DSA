#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student rahim(45, 5, 3.2);

    Student karim(2, 5, 5);

    // Student karim(r,c,g);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}