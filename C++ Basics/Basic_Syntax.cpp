/* // C++ program to demonstrate syntax
// Header File Libraray
#include <iostream>

// Standard Namespace
using namespace std;

// Main Function
int main()
{
    // Body of the Function

    // Declaration of Variable
    int num1 = 16;
    int num2 = 8;

    int result = num1 / num2;

    //Output
    cout << result <<endl;
    //Return Statement


    return 0;
} */

// C++ program to illustrate the identifiers
#include <iostream>
using namespace std;

// here Car-24 identifier is used to refer the below class
class Car_24
{
    string Brand;
    string model;
    int year;
};

// CalculateSum identifier is used to call the below
// function
void calculateSum(int a, int b)
{
    int total_sum = a + b;
    cout << "The sum is: " << total_sum << endl;
}
int main()
{
    //identifiers used as variable names
    int studentAge = 20;
    double accountBalane = 1000.50;
    string student_Name = "Nasir Uddin";
    calculateSum(10,20);
    return 0;
}