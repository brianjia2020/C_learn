#include <stdio.h>

// define a dog struct
struct Dog {
    char* name;
    int age;
    double weight;
};

char* say(struct Dog* dog) {
    // put the info into a string
    static char info[50]; //
    sprintf(info, "name=%s, age=%d, weight=%f", dog->name, dog->age, dog->weight);
    return info;
}

int main() {
    //
    struct Dog dog;
    char* info = NULL;
    dog.name = "wu yue";
    dog.age = 2;
    dog.weight = 3.4;
    info = say(&dog); // struct is default value pass, so pass by pointers which is more efficient
    printf("dog info is: %s\n", info);
}