#include <stdio.h>

double getAverage(int * arr, int size);
void main(){
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance, 5);
    printf("avg = %.4f\n", avg);
}

double getAverage(int* arr, int size) {
    int i = 0, sum = 0;
    for(i=0;i<size;i++){
        sum += *arr;
        arr += 1;
    }
    return sum * 1.0 / size;
}