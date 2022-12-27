#include <stdio.h>
#include <string.h>

void printMenu(){
    printf("-------Family Income Accountant Software--\n");
    printf("       1. Income statement----------------\n");
    printf("       2. Record an income----------------\n");
    printf("       3. Record an expense---------------\n");
    printf("       4. Exit----------------------------\n");

    printf("Please input your options: \n");
}

void printAllDetails(char details[]) {
    printf("%s", details);
}

void recordIncome(double* money, double* balance, char note[], char temp[], char details[]){
    printf("This income is : \n");
    scanf("%lf", money);
    getchar();
    printf("This income explanation: \n");
    scanf("%s", note);
    getchar();
    *balance += *money;

    sprintf(temp, "income\t %.2f\t\t%.2f\t\t%s\n", *money, *balance, note);
    strcat(details, temp);
}

void recordExpense(double* money, double* balance, char note[], char temp[], char details[]){
    printf("This expense is : \n");
    scanf("%lf", money);
    getchar();
    printf("This expense explanation: \n");
    scanf("%s", note);
    getchar();
    *balance -= *money;

    sprintf(temp, "expense\t -%.2f\t\t%.2f\t\t%s\n", *money, *balance, note);
    strcat(details, temp);
}

// 1. show the menu
// 2. record an income
//    
int main() {

    char key = '0';
    int loop = 1; // control if exit the loop
    char details[3000] = "income\t amount\t\tbalance\t\texplanation\n";
    char note[20] = ""; // explanation for income/expense
    char temp[100] = ""; // used to record every 
    double money = 0.0;
    double balance = 1000.0; // initial amount
    
    do {
        printMenu();
        scanf("%c", &key);
        getchar(); // filter the enter key

        switch(key) {
            case '1':
                printAllDetails(details);
                break;
            case '2':
                recordIncome(&money, &balance, note, temp, details);
                break;
            case '3':
                recordExpense(&money, &balance, note, temp, details);
                break;
            case '4':
                printf("Exited the software\n");
                loop = 0;
                break;
        }
    } while(loop);

    return 0;
}