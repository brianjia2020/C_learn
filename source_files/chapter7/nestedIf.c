#include <stdio.h>

int main()
{
    /**
     * 1. var double time, char gender
     * 2. use nested if
     */
    double time = 0.0;
    char gender = 'm';
    printf("Please input running time in sec: ");
    scanf("%lf", &time);
    if (time >= 8) {
        printf("Please input your gender: ");
        scanf("%c", &gender); // it will take the space char, we need to take it again
        scanf("%c", &gender);
        if (gender == 'm') {
            printf("You are into the man's final\n");
        } else {
            printf("You are into the woman's final\n");
        }
    } else {
        printf("You didn't make it!");
    }
    return 0;
}
