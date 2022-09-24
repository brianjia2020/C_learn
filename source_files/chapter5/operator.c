#include <stdio.h>

int main() {
    int a = 8, b = 7;
    printf("a>b=%d\n", a>b);
    printf("a>=b=%d\n", a>b);
    printf("a<b=%d\n", a<b);
    printf("a==b=%d\n", a==b);
    printf("a!=b=%d\n", a!=b);
    int c = 2;
    c <<= 2;
    printf("c=%d\n", c);
    return 0;
}
