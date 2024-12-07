/* #include <bits/stdc++.h>
using namespace std;
int main()
{
     int x = 10;
    cout << x << endl;

    int *p = new int; // dynamic variable declare
    *p = 20;

    char *p = new char; // dynamic variable declare
    *p = 'A';

    double *p = new double; // dynamic variable declare
    *p = 20.166;

    cout << *p << endl;





    return 0;
} */

/* Static Memory Examples*/

/* #include <bits/stdc++.h>
using namespace std;
void fun()
{
    int x = 10;
    return;
}
int main()
{
    fun();
    return 0;
} */

/* How to delete value from static memory*/
/*  #include <bits/stdc++.h>
using namespace std;
int *p; //Globally declaration
void fun()
{
    int x = 10;
    p = &x;
    cout << "Fun ->" << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "Main ->" << *p << endl;
    return 0;
} */

/* How to get value from Dynamic memory*/

#include <bits/stdc++.h>
using namespace std;
int *p; // Globally declaration

void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun ->" << *p << endl;
    return;
}
int main()
{
    fun();

    int *a = new int;
    delete a;
    cout << "Main ->" << *p << endl;
    return 0;
}
