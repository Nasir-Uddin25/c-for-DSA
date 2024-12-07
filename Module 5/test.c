#include <stdio.h>
#include <string.h>
int main()
{

    char s[10005];
    scanf("%s", s);

    int length = strlen(s);

    char target[] = "EGYPT";
    int targetIndex = 0; // Index for target sequence "hello"

    // Iterate through the string S
    for (int i = 0; i < length; i++)
    {
        if (s[i] == target[targetIndex])
        {
            targetIndex++; // Move to the next character in "hello"
        }
    }
    printf("%d", );

    return 0;
}