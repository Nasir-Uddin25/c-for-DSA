#include <bits/stdc++.h>
using namespace std;
int main()
{
    // problem approach
    // string input with space
    // stringstream
    // reverse function

    // string s;
    // getline(cin, s);

    stringstream ss("You love me");

    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    // cout << s;
    //  string s;
    //  getline(cin, s);
    //  reverse(s.begin(), s.end());
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      if (s[i] != ' ')
    //      {
    //          cout << s[i];
    //      }
    //  }

    // char s[100];
    // // cin >> s;
    // cin.getline(s, sizeof(s));
    // int n = strlen(s);
    // for (int i = 0, j = n - 1; i < j; i++, j--)
    // {

    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] != ' ')
    //     {
    //         cout << s[i];
    //     }
    // }

    return 0;
}