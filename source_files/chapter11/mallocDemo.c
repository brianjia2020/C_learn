#include <stdio.h>
#include <stdlib.h>

void main(){
    void check(int*); // function declaration
    int *p, i; // main function stack creates pointer p and integer i
    p = (int*)malloc(5*sizeof(int)); // creates 20 bytes of space in heap, cast void* to int*
    for(i=0;i<5;i++){
        scanf("%d", p+i);
    }
    check(p);
    free(p); // release the memory
}

void check(int* p){
    int i;
    printf("Not passed includes: \n");
    for(i=0;i<5;i++){
        if (p[i] < 60) {
            printf("%d\n", p[i]);
        }
    }
}