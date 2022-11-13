#include <stdio.h>
#include <stdlib.h>

int* f1(){
    // static so that the arr is created in static and won't be destroyed when out of the method
    static int arr[10]; 
    for(int i=0;i<10;i++){
        arr[i] = rand();
    }
    return arr;
}

void main(){
    int *p = f1();
    for(int i=0;i<10;i++){
        printf("%d\n", *(p+i));
    }
}