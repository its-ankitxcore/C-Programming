#include <stdio.h>

int main() {
    int income , tax=0 ;
    printf("enter income");
    scanf("%d", &income);
    if (income<=250000L){
        tax=0;
    }
    else if (income>250000L && income<=50000L){
        tax=0.05*(income - 250000);
    }
    else if (income>500000 && income<1000000){
        tax=0.05*(500000-250000) + 0.2*(income-500000);
    }
    else {
        tax=0.05*(500000-250000) + 0.2*(1000000-500000)+0.3*(income-1000000);
    }
    printf("the total tax you need to pay is %d",tax);
    return 0;
}