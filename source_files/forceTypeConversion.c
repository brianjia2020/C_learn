#include <stdio.h>

int main()
{
    double d1 = 1.234;
    int num = (int)d1;

    // force type conversion
    int num2 = (int) 3.5 * 10 + 6 * 1.5; // equals to 39
    int num3 = (int) (3.5 * 10 + 6 * 1.5);
    printf("This num2 is: %d\n", num2);
    printf("This num3 is: %d\n", num3);

    char c = 'a';
    int i = 5;
    float num4 = .345F;
    double d = c + i + num4;
    printf("This num3 is: %.6f\n", d);
    return 0;
}
