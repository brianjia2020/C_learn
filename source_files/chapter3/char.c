#include <stdio.h>

int main()
{
    // each char consumes only 1 byte
    char c1 = 'a';
    char c2 = 'b';
    char c3 = 97; // when we print out 97 as c, C program will output the corresponding character
                  // defined by the ASCII table
    printf("c1=%c c2=%c c3=%c\n", c1, c2, c3);

    int num = c2 + 10; // c2 is b so 98 + 10 -> 108
    printf("num=%d\n", num);
    return 0;
}