#include <stdio.h>

void main(){
    double nums[5];
    int length = sizeof(nums) / sizeof(double);
    for(int i = 0; i < length; i++){
        printf("Please input a floating number: ");
        scanf("%lf", &nums[i]);
    }

    for(int i = 0; i < length; i++){
        printf("nums[%d] = %.2f\n", i, nums[i]);
    }
}