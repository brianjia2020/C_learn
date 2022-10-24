#include <stdio.h>


void fn_static() {
    static int n = 10; // this n is in the static variables
    printf("n=%d\n", n);
    n++;
    printf("n=%d\n", n);
}

void fn() {
    int n = 10; // this n is in the stack area, everytime creates a new
    printf("n=%d\n", n);
    n++;
    printf("n=%d\n", n);
}

void main() {
    fn_static();
    fn_static();
    fn();
    fn();
}
