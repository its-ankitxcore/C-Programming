#include <stdio.h>

int main() {
    int num;
    
    printf("enter number:");
    scanf("%d",&num);

    if(num>0){
        printf("num is positive\n");
        if(num%2==0){
            printf("num is even\n");
        }
        else {
            printf("num is odd\n");
        }
    }
    else{
        printf("num is negative\n");
    }
    return 0;
}