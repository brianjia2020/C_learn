#include <stdio.h>

#define PI 3.14
const double PI2 = 3.1415;

#define A 1
#define B (A+3)
#define C A/B*3 // so what is C?

int main()
{
    // PI = 3.1415;
    float r = 1.2;
    float area = PI * r * r;
    printf("The area is %f\n", area);

    printf("c= %d\n", C);
#ifdef A
    printf("A has been defined");
#endif
#ifndef A
    printf("A has not been define");
#endif
    // C = A/A+3*3 = 10 which is very wrong
    return 0;
}
