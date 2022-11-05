#include <stdio.h>

const int MAX = 3;
void main() {
    int var[] = {10, 100, 200};
    int i, *ptr;
    ptr = var;
    i = 0;
    while(ptr <= &var[MAX-2]) {
        printf("Address is %p\n", ptr);
        printf("Value is %d\n", *ptr);
        ptr++;
        i++;
    }
}