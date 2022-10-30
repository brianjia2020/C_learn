#include <stdio.h>

void f1(int arr[]){
    arr[0] += 1;
}

void main(){
    int arr[] = {3, 4, 5};
    f1(arr); // pass by pointers by default
    printf("arr[0] = %d\n", arr[0]);
}