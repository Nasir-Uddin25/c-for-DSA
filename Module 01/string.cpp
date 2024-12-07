/* #include <iostream>
using namespace std;
int main()
{
    /*
    int x;
    cin >> x;
    cin.ignore();
    // String means character array
    char s[100];
    //cin >> s;
    // fgets(s, 100, stdin);
    cin.getline(s, 100);
    cout << x << endl
         << s << endl;

    // fgets function (string name, string length, stdin) 

    

    return 0;
}*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

int main() {
    std::string input;
    std::vector<std::string> lines;

    // Reading input until EOF
    while (std::getline(std::cin, input)) {
        if (input.empty()) {
            continue;
        }
        // Remove spaces and sort the characters
        input.erase(std::remove_if(input.begin(), input.end(), ::isspace), input.end());
        std::sort(input.begin(), input.end());
        lines.push_back(input);
    }

    // Print the sorted characters for each line
    for (const std::string& line : lines) {
        std::cout << line << std::endl;
    }

    return 0;
}


