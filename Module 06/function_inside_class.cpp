#include <bits/stdc++.h>
using namespace std;

class Student
{
    public :
    string name;
    int roll;
    double gpa;
    int math;
    int english;

    Student(string name, int roll, double gpa, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->gpa = gpa;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name <<" "<< "=" <<" " << math + english <<endl;
    }
    // void fun()
    // {
    //     cout << "Hello from " << name <<endl;
    // }
};
int main()
{
    Student nasir("Nasir Uddin", 10, 4.78, 69, 62);
    //cout <<nasir.name <<" " << nasir.roll <<" " <<nasir.gpa<<endl;
    nasir.total();
    Student nurhossen("Nur Hossen", 01, 4.78, 58, 95);
    nurhossen.total();
    return 0;
}