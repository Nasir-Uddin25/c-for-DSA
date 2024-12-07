#include <iostream>

#include <string>

int main()
{

    std::string s = "Hello, World!";

    // s.size() উদাহরণ

    std::cout << "স্ট্রিংয়ের সাইজ: " << s.size() << std::endl;

    // ব্যাখ্যা: এখানে s.size() ফাংশনটি স্ট্রিংয়ের দৈর্ঘ্য বা সাইজ রিটার্ন করবে, যা "Hello, World!" এর ক্ষেত্রে 13।

    // s.max_size() উদাহরণ

    std::cout << "স্ট্রিংয়ের সর্বোচ্চ সাইজ: " << s.max_size() << std::endl;

    // ব্যাখ্যা: s.max_size() ফাংশনটি স্ট্রিং অবজেক্টের সর্বোচ্চ সাইজ রিটার্ন করবে, যা স্ট্রিং অবজেক্ট ধারণ করতে পারে।

    // s.capacity() উদাহরণ

    std::cout << "স্ট্রিংয়ের ক্যাপাসিটি: " << s.capacity() << std::endl;

    // ব্যাখ্যা: s.capacity() ফাংশনটি স্ট্রিংয়ের বর্তমান ক্যাপাসিটি রিটার্ন করবে, অর্থাৎ স্ট্রিং অবজেক্টে ডেটা রাখার জন্য বর্তমানে কতটুকু স্থান রয়েছে।

    // s.clear() উদাহরণ

    s.clear();

    std::cout << "স্ট্রিং ক্লিয়ার করার পর সাইজ: " << s.size() << std::endl;

    // ব্যাখ্যা: s.clear() ফাংশনটি স্ট্রিংটি খালি করে দেবে, অর্থাৎ স্ট্রিংয়ের কন্টেন্ট মুছে ফেলবে।

    // s.empty() উদাহরণ

    std::cout << "স্ট্রিং কি খালি?: " << (s.empty() ? "হ্যাঁ" : "না") << std::endl;

    // ব্যাখ্যা: s.empty() ফাংশনটি চেক করবে স্ট্রিংটি খালি কিনা। যদি খালি হয় তবে true রিটার্ন করবে, না হলে false।

    // s.resize() উদাহরণ

    s.resize(10);

    std::cout << "স্ট্রিং রিসাইজ করার পর সাইজ: " << s.size() << std::endl;

    // ব্যাখ্যা: s.resize(10) ফাংশনটি স্ট্রিংটির সাইজ পরিবর্তন করে 10 করে দেবে। যদি বর্তমান সাইজ 10 এর চেয়ে ছোট হয় তবে নতুন সাইজ অনুযায়ী স্ট্রিং বড় হবে এবং অতিরিক্ত জায়গা null character দ্বারা পূর্ণ হবে।

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    /* string s = "hello worl woodlsoowppwnvnnllspwpppw";

    //int n = s1.size();
    cout << s.size() << endl;
    cout << s.max_size() <<endl;  //10^6 10^9
    cout <<s.capacity() << endl; */

/*   string s = "Hello world";
  s.clear();
  cout << s << endl; */

/*   string s = "Hello world";

  s.clear();

  if(s.empty() == true)
  {
      cout << "Empty" << endl;
  }
  else{
      cout << "Not Empty" << endl;
  } */

/*   string s = "Hello, programmer";
  //s.clear();
  if (s.size() == 0)
  {
      cout << "Empty" << endl;
  }
  else
  {
      cout << "Not Empty" << endl;
  }

// s.resize() -> change the size of the string.

// string s = "Hello world";
// s.resize(25, 'a');
// cout << s.size() << endl;
// return 0;
}*/