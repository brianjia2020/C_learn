#include <stdio.h>

int main()
{
    // example 1. type conversion to types of better precision
    char c1 = 'a';
    int num1 = c1;
    double d1 = num1;

    // example 2.
    short s1 = 10;
    int num2 = 20;
    int num3 = s1 + num2;

    // example 3.
    float f1 = 1.1f;
    double d2 = 4.586123438;
    f1 = d2;                 // loss of precision double -> float
    printf("f1=%.8f\n", f1); // expected 4.586123438 VS actual 4.58612347
    return 0;
}