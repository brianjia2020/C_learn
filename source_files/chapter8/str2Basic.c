#include <stdio.h>
#include <stdlib.h>

void main() {
    char str[10] = "12345";
    char str2[10] = "12.67423";
    char str3[2] = "a";
    char str4[4] = "111";

    int num1 = atoi(str);
    short num2 = atoi(str4);
    double num3 = atof(str2);
    char c = str3[0];

    printf("num1=%d, num2=%d, num3=%f, c=%c\n", num1, num2, num3, c);
}
