#include <stdio.h>
#include <string.h>

// define a struct
struct Visitor{
    char name[10];
    int age;
    double pay;
};

// business logic
// pass by pointers, more efficient than value
void ticketPrice(struct Visitor* visitor) {
    // -> euqals (*visitor).age
    if (visitor->age > 18) {
        visitor->pay = 20;
    } else {
        visitor->pay = 40;
    }
}

// test
int main() {
    struct Visitor visitor1;
    while (1)
    {
        /* code */
        printf("\nPlease input the visitor name: ");
        scanf("%s", visitor1.name);
        if (!strcmp(visitor1.name, "n")) break;
        printf("\nPlease input the visitor age: ");
        scanf("%d", &visitor1.age);

        ticketPrice(&visitor1); // get the propriate price
        printf("\nthe price for %s at age %d is %f", visitor1.name, visitor1.age, visitor1.pay);
    }
    
    return 0;
}