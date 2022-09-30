#include <stdio.h>

void f1() {
    // num is local only to f1, cannot be called in other methods
    // basic data types are always passed by value which means
    // their value will not be changed inside this function
    int num = 10;
}

// inside the function the value changes
// when it returns the num still doesn't change
void f2(int num) {
    num -= 1;
}

// passing a pointer can have the effect to change the value outside the function
void f3(int* p) {
    (*p)++;
}

// C doesn't support function over-load
//   only by function names

void main() {
    int n = 9;
    f2(n);
    printf("after f2, n=%d\n", n);

    int* p = &n;
    f3(p);
    printf("after f3, n=%d\n", n);
}
