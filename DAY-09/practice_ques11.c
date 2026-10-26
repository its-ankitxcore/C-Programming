#include <stdio.h>

int main() {
    int num , i=10;
    printf("enter number:");
    scanf("%d",&num);
    while(i>=1){
        printf("%d X %d = %d\n",num,i,num*i);
        i--;;
    }
    return 0;
}