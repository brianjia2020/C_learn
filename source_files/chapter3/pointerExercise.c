#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr = &num;
    printf("The value of this num is: %d, address is %p\n", num, &num);
    *ptr = 99; // the value of num is being updated to 99
    printf("The value of this num is: %d, address is %p\n", num, ptr);


    int a = 300;
    int b = 400;
    int *temp = &a;
    *temp = 100;
    temp = &b;
    *temp = 200;
    printf("a=%d, b=%d, *ptr=%d\n", a, b, *temp);

    // pass by value VS pass by pointer
    return 0;
}
