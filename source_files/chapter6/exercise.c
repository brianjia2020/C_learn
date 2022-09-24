#include <stdio.h>
#include <stdio.h>

int main() {
    int b = ~2;
    int c = 2 & -3;
    int d = 10 >> 2; // 10 / 2  = 5; 5 / 2 = 2;
    int e = -1 >> 2;
    int f = 2 << 2;
    int g = -1 << 2;
    // -1 => 10000000 00000000 00000000 00000001
    // -1 reverse code => 11111111 11111111 111111111 11111110
    // -1 backup code => 11111111 11111111 111111111 11111111
    // >> 2 => 11111111 11111111 111111111 11111111 (still the same)
    // backup code 11111111 11111111 111111111 11111110
    // origin code 10000000 000000000 00000000 00000001
    // so it's -1
    printf("b=%d, c=%d, d=%d, e=%d, f=%d, g=%d\n", b, c, d, e, f, g);
    return 0;
}
