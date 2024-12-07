#include <bits/stdc++.h>
using namespace std;
int main()
{
    // erase

    string s = "HelloinWorld";
    // s.erase(5, 2); // s.erase(index, number of character)
    // cout << s << endl;

    // // after insertion

    // // s.insert(index, character);  //insert single  a character

    // s.insert(s.begin() + 5, ' ');
    // cout << s << endl;

    // // s.insert(index, string name)
    // s.insert(5, "the");
    // cout << s << endl;

    //replace
    //s.replace(index, num of character, string)
    s.replace(5, 2, " ");
    cout << s <<endl;
    return 0;
}