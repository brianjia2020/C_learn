#include <stdio.h>
#include <math.h>

int main()
{
    // how to
    int a = 2;              // -2^15 to 2^15
    int num1 = -2147483648; // smallest number of int
    signed int num2 = 2147483647;
    unsigned int num3 = 2147483648;                       // the range roughly doubles
    printf("the bytes are this int is %ld\n", sizeof(a)); // 4
    printf("The smallest number of int is %d\n", num1);
    printf("The biggest number of int is %d\n", num2);
    printf("The biggest number of int is %d\n", num3);
    // for short -> 3, memory is like 00000000,00000011, two bytes
    // for int -> 3, memory is like 00000000,00000000,00000000,00000011, four bytes
    // if it is signed, then it's negative to positive, half of the range of unsigned
    // range is - 2^(8*number of bytes - 1) to 2^(8*number of bytes - 1) -1
    // if it is unsigned, then it's 0 to 2^(8 * number of bytes)
    return 0;
}