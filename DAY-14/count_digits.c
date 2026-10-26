#include <stdio.h>

int main() {
    int num,count=0,digit;
    printf("enter number:");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    printf("the count is %d\n",count);
    return 0;
}