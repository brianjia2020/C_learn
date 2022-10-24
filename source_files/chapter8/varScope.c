#include <stdio.h>

int n=2;

void sayHello() {
    char name[] = "tom";
    printf("hello %s \n", name);
}

// it will prioritize local var than global var
void f10(int n) {
    printf("n=%d\n", n);
}

void main() {
    sayHello();
    f10(10);
}
