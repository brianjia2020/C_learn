#include <stdio.h>

int main()
{
    float d1 = 1.18909095; // 1.1 is a double then concatenate to float
                           // float will only keep up to 6 digits after 0
                           // so the afterwards digits are not accurate in this case
    float d2 = 1.1f;       // 1.1f is a float
    double d3 = 1.3;       // 1.3 is a double, so no issue
    double d4 = 5.12;
    double d5 = .512;    // equivalent to 0.512
    double d6 = 5.12e2;  // equivalent to 5.12 * 10^2 => 512
    double d7 = 5.12e-2; // equivalent to 5.12 * 10^-2 => 0.0512

    // if %f, by default it will show upto 6 digits
    printf("d1=%.15f\n", d1);
    printf("d2=%f\n", d2);
    printf("d3=%f\n", d3);
    printf("d4=%f\n", d4);
    printf("d5=%f\n", d5);
    printf("d6=%f\n", d6);
    printf("d7=%f\n", d7);

    return 0;
}