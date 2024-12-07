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

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{

    Student karim(2, 5, 5);
    Student *p = &karim;
    return p;
}
int main()
{

    Student *p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}