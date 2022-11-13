#include <stdio.h>

int main() {
    int var;
    int* ptr; // ptr
    int** pptr; // second level ptr
    int*** ppptr; // third level ptr
    var = 3000;

    ptr = &var;
    pptr = &ptr;
    ppptr = &pptr;

    printf("address of var is %p, value of var is %d\n", &var, var);
    printf("address of ptr is %p, address ptr points to is %p, value ptr points to is %d\n", &ptr, ptr, *ptr);
    printf("address of pptr is %p, address pptr points to is %p, value pptr points to %d\n", &pptr, pptr, **pptr);
    printf("address of ppptr is %p, address ppptr points to is %p, value ppptr points to %d\n", &ppptr, ppptr, ***ppptr);
    return 0;
}