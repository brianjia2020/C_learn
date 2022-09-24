// introduction to pointers
#include <stdio.h>

int main()
{
    int num = 5;
    // define a pointer var
    // int * means pointer type, ptr is a pointer class points to an integer
    // name is ptr
    // ptr points to an integer type
    int *ptr = &num;

    // %p means to print pointer type
    // & sign represents the pointer of the var
    // * to get the value of pointer points to
    printf("The value of num is %d, address is %p\n", num, &num);
    printf("The ptr address is %p, the value of ptr is %p, the value ptr is pointing to is %d\n", &ptr, ptr, *ptr);
    return 0;
}
