#include <stdio.h>

int main() {
    int n , i;
    printf("enter number:");
    scanf("%d",&n);
    i=n;
    do{
        printf("%d\n",i);
        i--;
    }
    while(i>=1);
    return 0;
}