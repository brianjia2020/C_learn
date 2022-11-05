#include <stdio.h>

const int MAX = 3;
int main(){
    int var[] = {10, 20, 200};
    int i, *ptr;
    ptr = var; // ptr points to the first address of var array

    for (i = 0; i< MAX;i++) {
        printf("sizeof(int) = %lu", sizeof(int));
        printf("var[%d] address is %p\n", i, ptr);
        printf("var[%d] value is %d\n", i, *ptr);
        ptr++; // ptr moves to 4 bytes
    }

    ptr = &var[0];
    printf("var[0] %p is pointing to %d\n", &var[0], var[0]);
    printf("ptr %p is pointing to %d\n", ptr, *ptr);
    ptr += 2; // now points to 200, the third element
    printf("var[2] %p is pointing to %d\n", &var[2], var[2]);
    printf("ptr %p is pointing to %d\n", ptr, *ptr);
    return 0;
}