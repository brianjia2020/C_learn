#include <stdio.h>

#define N 10
#define M (N*N + N^2*2)

void main() {
    int sum = M + 10;
    printf("sum=%d\n", sum);
}
