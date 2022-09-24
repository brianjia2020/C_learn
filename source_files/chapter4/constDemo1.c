#include <stdio.h>

int main()
{
    int n1 = 0213; // 8 based numbers -> 139
    int n2 = 0x4b; // 16 based numbers -> 75
    char c1 = 'A';
    char c2 = '\t';
    char str[16] = "This is Brian";
    printf("n1=%d, n2=%d, str=%s\n", n1, n2, str);
    return 0;
}
