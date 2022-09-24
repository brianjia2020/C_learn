#include <stdio.h>

int main() {
    int a = 10;
    int b = 99;
    int res = a > b ? a++ : b--;

    int n1 = a > b ? 1.1 : 1.2;

    printf("a=%d, b=%d, res=%d\n", a, b, res); // a=101, b=98, res=99
    return 0;
}
