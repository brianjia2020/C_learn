#include <stdio.h>

void main() {
    int a = 10;
    int b = 100;
    char op = '*';
    // better to put this logic into its own method and recall

    printf("The answer is %d\n", (int) calculate(a, b, op));
    printf("The answer is %d\n", (int) calculate(a, b, '+'));
}
