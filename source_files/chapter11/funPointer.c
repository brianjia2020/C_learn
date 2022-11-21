#include <stdio.h>

int max(int a, int b);

void main(){
    int x, y, maxVal;

    // function pointer 
    // int is return type
    // (int, int) means it takes two input parameters of type integer, integer
    int (*pmax)(int, int) = max;
    printf("input two numbers: \n");

    scanf("%d %d", &x, &y);
    maxVal = (*pmax)(x, y);
    printf("max value is %d, pmax=%p, &pmax=%p\n", maxVal, pmax, &pmax);
}

// function max
int max(int a, int b) {
    return a > b ? a : b;
}