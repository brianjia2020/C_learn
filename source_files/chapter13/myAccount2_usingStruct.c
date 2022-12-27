#include <stdio.h>
#include <string.h>

struct MyFamily{
    int flag; // has at least one record
    char details[3000];
    double balance;
};

// global vars
int loop = 1;
char note[20] = "";
char temp[100] = "";
double money = 0.0;
char choice = 'y';
char key = '1';

void printAllDetails(char details[]) {
    printf("%s", details);
}

void printMenu(){
    printf("-------Family Income Accountant Software--\n");
    printf("       1. Income statement----------------\n");
    printf("       2. Record an income----------------\n");
    printf("       3. Record an expense---------------\n");
    printf("       4. Exit----------------------------\n");

    printf("Please input your options: \n");
}

void recordAnEntry(double* money, double* balance, char note[], char temp[], char details[], int flag){
    char* entryType = "income";
    if (!flag) entryType = "expense";
    printf("This %s is : \n", entryType);
    scanf("%lf", money);
    getchar();
    printf("This %s explanation: \n", entryType);
    scanf("%s", note);
    getchar();
    if (flag) {
        *balance += *money;
    } else {
        *balance -= *money;
    }

    sprintf(temp, "%s\t%.2f\t%.2f\t%s\n", entryType, *money, *balance, note);
    strcat(details, temp);
}

void makeSureToExit(int* loop) {
    printf("Are you sure to exit? 0 or 1\n");
    int ans = 0;
    scanf("%d", &ans);
    getchar();
    if (ans) {
        *loop = 0;
    }
    printf("You have exited the program.\n");
}

int main() {
    struct MyFamily myFamily;
    struct MyFamily* myFamilyPointer = &myFamily;
    myFamily.balance = 1000.0;
    memset(myFamilyPointer->details, 3000, 0);
    strcpy(myFamily.details, "income\tamount\tbalance\texplanation\n");
    do {
        printMenu();
        scanf("%c", &key);
        getchar(); // filter the enter key

        switch(key) {
            case '1':
                printAllDetails(myFamilyPointer->details);
                break;
            case '2':
                recordAnEntry(&money, &myFamilyPointer->balance, note, temp, myFamilyPointer->details, 1);
                break;
            case '3':
                recordAnEntry(&money, &myFamilyPointer->balance, note, temp, myFamilyPointer->details, 0);
                break;
            case '4':
                makeSureToExit(&loop);
                break;
        }
    } while(loop);

    return 0;
}