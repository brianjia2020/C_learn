#include <stdio.h>

void main(){
    int* p = NULL; // null pointer, better to point to NULL by default
    int num = 34;
    p = &num;

    printf("*p = %d\n", *p);
}