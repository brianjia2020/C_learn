double calculate(int a, int b, char op) {
    double res = 0.0;
    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            printf("The operator is not valid!\n");
    }
    return res;
}
