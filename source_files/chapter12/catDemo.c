#include <stdio.h>

// create cat struct
struct Cat {
    char* name;
    int age;
    char* color;
};

void main(){
    // declare a var
    struct Cat cat1;
    cat1.age = 5;
    cat1.name = "little white";
    cat1.color = "white";
    
    struct Cat cat2;
    cat2.age = 100;
    cat2.name = "little black";
    cat2.color = "black";

    // print out the info
    printf("first cat name = %s, age = %d, color = %s\n", cat1.name, cat1.age, cat1.color);
    printf("second cat name = %s, age = %d, color = %s\n", cat2.name, cat2.age, cat2.color);
}