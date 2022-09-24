#include <stdio.h>

int main() {
    char name[10] = "";
    int age = 0;
    double salary = 0.0;
    char gender = 'm';

    printf("Please enter your name: \n");
    scanf("%s", name);

    printf("Please enter your age: \n");
    scanf("%d", &age); // put the input to age's mem address, need put & sign

    printf("Please enter your salary: \n");
    scanf("%lf", &salary); // take a double.

    printf("Please enter your gender(m or f): \n");
    scanf("%c", &gender);
    scanf("%c", &gender); //

    //print out all the collected info
    printf("\nname= %s, age= %d, salary= %.2f, gender= %c \n", name, age, salary, gender);

    return 0;
}
