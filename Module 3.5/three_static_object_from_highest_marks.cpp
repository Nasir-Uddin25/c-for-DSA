#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
    // void fun()
    // {
    //     cout << "Allah AKbar" << name <<endl;
    // }
};
int main()
{
    Student nasir("NasirUddin", 8, 'A', 65, 10);
    cout << nasir.name <<" " << nasir.roll <<" " << nasir.section << " " << nasir.math_marks << " " << nasir.cls << endl;
    //nasir.fun();

    Student nur("NurHossen", 01, 'B', 85, 10);
    cout << nur.name <<" " <<nur.roll <<" " <<nur.section <<" " <<nur.math_marks <<" " <<nur.cls <<endl;



    return 0;
}