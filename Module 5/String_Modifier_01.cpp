#include <iostream>

#include <string>

int main()
{

    std::string s = "Hello, World!";

    std::string t = " C++";

    // s+= উদাহরণ

    s += t;

    std::cout << "s+= t এর পর: " << s << std::endl;

    // ব্যাখ্যা: s += t এর মাধ্যমে s এর শেষে t যোগ করা হয়। ফলাফল "Hello, World! C++"।

    // s.append() উদাহরণ

    s.append(" Programming");

    std::cout << "s.append() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.append(" Programming") এর মাধ্যমে s এর শেষে " Programming" যোগ করা হয়। ফলাফল "Hello, World! C++ Programming"।

    // s.push_back() উদাহরণ

    s.push_back('!');

    std::cout << "s.push_back() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.push_back('!') এর মাধ্যমে s এর শেষে '!' যোগ করা হয়। ফলাফল "Hello, World! C++ Programming!"।

    // s.pop_back() উদাহরণ

    s.pop_back();

    std::cout << "s.pop_back() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.pop_back() এর মাধ্যমে s এর শেষের ক্যারেক্টারটি মুছে ফেলা হয়। ফলাফল "Hello, World! C++ Programming"।

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x = 10;
    // int y = 25;

    // char str1[20] = "Hello";
    // char str2[20] = "World";

    // cout << strcat(str1, str2) << endl;

    /* string s1 = "Nasir";
    string s2 = "Uddin";
    s1 += s2;   // s1 = s1+s2
    cout << s1 <<endl; */

/*  string s1 = "I am learng c++ language";
 string s2 = "Now , I am practising built in function in Strings";

 s1.append(s2);
 cout << s1 << endl; */

/* string s = "Hello";
s.push_back('A');
cout << s << endl; */

/*    string s = "Hello";
   s[5] = 'i';
   cout << s << endl; */

/* string s = "Hello";
s.pop_back();
s.pop_back();
cout << s <<endl;
return 0;
} */