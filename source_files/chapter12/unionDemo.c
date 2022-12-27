#include <stdio.h>

union data {
    int n; // 4
    char ch; // 1
    short m; // 2
};

void main() {
    union data a;
    printf("%d, %d\n", sizeof(a), sizeof(union data)); // 4, 4 not 7, 7

    a.n = 0x40; // 64, a.ch should be 64, @, 64
    printf("%d, %c, %d\n", a.n, a.ch, a.m);
    a.ch = '9';// '9' in aschii is 57, 57, 9, 57
    printf("%d, %c, %d\n", a.n, a.ch, a.m);
}