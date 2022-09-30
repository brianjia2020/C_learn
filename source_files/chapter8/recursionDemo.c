#include <stdio.h>

void test(int n) {
    if (n > 2) {
        test(n-1);
    }
    printf("n=%d\n", n);
}

void test2(int n) {
    if (n > 2) {
        test2(n-1);
    } else {
        printf("n=%d\n", n);
    }
}

void main() {
    // test(4); // what is the output
    // n=2,n=3,n=4
    test2(4); // output is n=2

    // 1. recursion has to move to the direction that ends itself
    //    int this case has to be n-1, not n or n+1
}
