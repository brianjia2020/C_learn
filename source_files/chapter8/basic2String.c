#include <stdio.h>

void main() {
    char str1[20], str2[20], str3[20];
    int a=20984, b=48090;
    double d = 14.309948;
    sprintf(str1, "%d, %d", a, b);
    sprintf(str2, "%.2f", d);
    sprintf(str3, "%2.2f", d);
    printf("str1=%s, str2=%s, str3=%s\n", str1, str2, str3);
}
