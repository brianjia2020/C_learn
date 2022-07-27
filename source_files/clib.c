#include <math.h>
#include <stdio.h>

int sample()
{
    int a = 1; // computer
    int b = 3;
    b = 89;
    char test = 'A';
    char name[] = "Brian Jia";
    double num = 3.40;
    // for integer is %d
    // for floating number is %.2f
    // for a single character is %c
    // for a string is %s
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("this is char is %c\n", test);
    printf("my name is %s\n", name);
    printf("This floating number is %.3f\n", num);

    /*
        basic structure: number -> integers (short, int, long)
                                -> floating numbers (float, double)
                         char   -> (there is no string class, use char[])
        constructor:     array
                         struct
                         union
                         enum
        pointer: memory address
        void: no return

        1. there is no string class, in C we use char[]
        2. in different systems, some data structures bytes length are different
           for example int -> 2 bytes/4 bytes

        int a;
        signed int a; these two are the same, they are signs
        -2^31 to 2^31
        unsigned int a; 0 to 2^62, all positive
    */
    return 0;
}

int main()
{
    double ans = pow(2.0, 3.0);
    printf("ans is %.2f\n", ans);
    int a = sample();
    return 0;
}