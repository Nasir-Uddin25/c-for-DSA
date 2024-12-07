#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};
int main()
{
    Student a, b; // object declaration
    // a.roll = 1;
    // a.gpa = 4.78;
    // char temp[100] = "Nasir";
    // strcpy(a.name, temp);

    // Object input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    // cin.ignore();
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}