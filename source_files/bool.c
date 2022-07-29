#include <stdio.h>

// macro definition
#define BOOL int
#define TRUE 1
#define FALSE 0

/*
 * short -> int -> unsigned int -> long -> unsigned long -> float -> double -> long double
 * when you assign int to long, that int will be converting to long
 * data strcture will be converted automatically
 */
int main()
{
    int isPass = 0;
    isPass = 2;
    // 0 as false, non-zero as true
    if (isPass)
    {
        printf("You passed the exam\n");
    }

    // define a boolean variable
    BOOL isOk = TRUE; // equivalent int isOk = 1;
    if (isOk)
    {
        printf("Okay\n");
        printf("%ld\n", sizeof(char));
    }
    // can use macro to define

    return 0;
}