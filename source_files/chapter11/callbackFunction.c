#include <stdio.h>
#include <stdlib.h>

int getNextRandomValue() {
    return rand();
}

void initArray(int* array, int size, int (*f)(void)){
    int i = 0;
    for (i=0;i<size;i++) {
        array[i] = (*f)(); // by pointer to invoke the getNextRandomValue method
        // can be envoked by f()
    }
}
void main(){
    int myArray[10];

    // getNextRandomValue 
    initArray(myArray, 10, getNextRandomValue);

    for (int i=0;i<10;i++){
        printf("%d\n", myArray[i]);
    }
}