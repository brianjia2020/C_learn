#include <stdio.h>

void swap(int* n1, int* n2) {
    int temp = *n1; // copy n1 pointer's value to temp
    *n1 = *n2;
    *n2 = temp;
}

void main() {
    int a = 2, b = 3;
    printf("a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after swap, a=%d, b=%d\n", a, b);
}
