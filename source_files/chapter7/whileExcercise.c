#include <stdio.h>
#include <string.h>

int main() {
    //1. print all the numbers that can be divided by 3
    unsigned int i = 0;
    int max = 100;
    while (i <= max) {
        if (i % 3 == 0) {
            printf("This is the number %d\n", i);
        }
        i += 1;
    }

    //2. print all the even numbers between 40 and 200
    i = 40;
    max = 200;
    while (i <= max) {
        if (i % 2 == 0) {
            printf("This is the evem number %d\n", i);
        }
        i += 1;
    }

    //3. take in a string name, stop until there is exit
    char name[10] = "";
    while (strcmp(name, "exit") != 0) {
        printf("\nPlease enter a string: ");
        scanf("%s", name); // don't need mem address, itself is an address
        printf("\nThe input name is %s", name);
    }

    //4. take in a year and month, get the number of days in that month
    // 1,3,5,7,8,10,12 -> 31 days
    // 2 -> 28/29 days
    // else 30 days
    int year = 2019;
    int month = 12;
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d year of %d month has 31 days.\n", year, month);
            break;
        case 2:
            if ((year % 4 ==0 || year % 100 != 0) || year % 400 == 0) {
                printf("%d year of %d month has 29 days.\n", year, month);
            } else {
                printf("%d year of %d month has 28 days.\n", year, month);
            }
        default:
            printf("%d year of %d month has 30 days.\n", year, month);
            break;

    }

    return 0;
}
