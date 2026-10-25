#include <stdio.h>

int main() {
    int num;
    do{
        printf("enter number:");
        scanf("%d",&num);

        if(num%7==0){
            break;
        }
    }
    while(1);
    printf("thank you");
    return 0;
}