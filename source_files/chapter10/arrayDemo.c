#include <stdio.h>

void main(){
    // six chickens 
    double hens[6];
    // initialize 
    hens[0] = 3; // first element
    hens[1] = 5;
    hens[2] = 1;
    hens[3] = 3.4;
    hens[4] = 2;
    hens[5] = 50;

    double totalWeight = 0.0;
    double avg = 0.0;

    int arrayLength = sizeof(hens) / sizeof(double);
    printf("hens = %d, double=%d\n", sizeof(hens), sizeof(double));
    for(int i = 0; i < arrayLength; i++) {
        totalWeight += hens[i];
    }
    avg = totalWeight / 6;

    printf("total weight = %.2f, avg weight = %.2f\n", totalWeight, avg);
}