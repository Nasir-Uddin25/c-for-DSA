#include <iostream> //input output stream header file

int main()
{
    // C++ command (cout) output dekhanor jonno. namespace std and then double colon. then angular braket or less than sign

    // std ::cout <<"I am learning C++ language";

    // Print Variable value

    int x = 100;
    // printf("%d", x);
    char ch = 'N';
    double d = 12.5662;

    // My favorite number is 100
    // printf("%d\n", x);

    std::cout << x << " " << ch << std::endl
              << d << std::endl;
    std::cout << "My favorite number is " << x << std::endl;
    return 0;
}