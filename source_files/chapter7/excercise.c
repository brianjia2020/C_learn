#include <math.h>
#include <stdio.h>

int main() {
    /**
     * 1. define three variables a,b,c,x1,x2
     * 2. the value of (b^2 - 4*a*c) will be used many times, we can use a var to store its value
     * 3. sqrt in side <math.h>
     * 4. use else if to include different scenarios
     */

    double a =3, b =6, c=3, x1=0, x2=0;
    double t = b * b - 4 * a * c;

    if (t > 0) {
        x1 = (-b + sqrt(t)) / (2*a);
        x2 = (-b - sqrt(t)) / (2*a);
        printf("x1=%.2f\n", x1);
        printf("x2=%.2f\n", x2);
    } else if (t == 0) {
        x1 = -b / (2*a);
        printf("x1=%.2f\n", x1);
    } else {
        printf("there is no solution\n");
    }
    return 0;
}
