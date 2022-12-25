#include <stdio.h>

// create cat struct
struct Cat {
    char* name;
    int age;
    char* color;
};

void main(){
    struct Cat cat1;
    cat1.age = 100;
    cat1.name = "little black";
    cat1.color = "black";

    // print out the info
    printf("first cat name = %s, age = %d, color = %s\n", cat1.name, cat1.age, cat1.color);

}