#include <stdio.h>

int main() {
    // 10/4 => 2.5 => 2 => 2.000
    double d1 = 10 / 4; // 2
    double d2 = 10.0 / 4; // 2.5

    // a % b = a - a / b * b;
    int res1 = 10 % 3; // 1
    int res2 = -10 % 3; // -1
    int res3 = 10 % -3; // 1
    int res4 = -10 % -3; // -1

    // ++
    int i = 10;
    int j = i++; // int j = i; i = i + 1;
    int k = ++i; // i = i + 1; int k = i;
    // i=12, j=11, k=12

    printf("d1=%f\n", d1);
    printf("d2=%f\n", d2);
    printf("res1=%d\n", res1);
    printf("res2=%d\n", res2);
    printf("i=%d, j=%d, k=%d\n", i, j, k);
    return 0;
}
