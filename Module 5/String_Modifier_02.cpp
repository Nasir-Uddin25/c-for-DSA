#include <iostream>

#include <string>

int main()
{

    std::string s = "Hello, World!";

    std::string t = " C++";

    // s= উদাহরণ

    s = "New String";

    std::cout << "s= এর পর: " << s << std::endl;

    // ব্যাখ্যা: s = "New String" এর মাধ্যমে s এ নতুন স্ট্রিং "New String" এ অ্যাসাইন করা হয়।

    // s.assign() উদাহরণ

    s.assign("Assigned String");

    std::cout << "s.assign() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.assign("Assigned String") এর মাধ্যমে s কে "Assigned String" এ অ্যাসাইন করা হয়।

    // s.erase() উদাহরণ

    s.erase(8, 6);

    std::cout << "s.erase() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.erase(8, 6) এর মাধ্যমে s এর ৮ম ইন্ডেক্স থেকে শুরু করে ৬টি ক্যারেক্টার মুছে ফেলা হয়। ফলাফল "Assignedg"।

    // s.replace() উদাহরণ

    s.replace(0, 7, "Replaced");

    std::cout << "s.replace() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.replace(0, 7, "Replaced") এর মাধ্যমে s এর ০ম ইন্ডেক্স থেকে ৭টি ক্যারেক্টার "Replaced" দিয়ে পরিবর্তন করা হয়। ফলাফল "Replaceddg"।

    // s.insert() উদাহরণ

    s.insert(8, " String");

    std::cout << "s.insert() এর পর: " << s << std::endl;

    // ব্যাখ্যা: s.insert(8, " String") এর মাধ্যমে s এর ৮ম ইন্ডেক্সে " String" যোগ করা হয়। ফলাফল "Replaced Stringdg"।

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello, world!";
    string s2 = "New String";

    //s1 = s2;          s= -> assign string.
    //s1.assign(s2);    s.assign() -> assign string.
    //s2.assign("Programming");

    //s1.erase(3 ,5);       //s.erase(i th index number, remove the character number)
    //s2.erase(0,3);

    s1.replace(6, 0, "Nasir");   //s.replace(i th index number, remove the character number, assign the string)
    //s1.insert(6, "Nasir");
    cout << s1 << endl;
    return 0;
} */