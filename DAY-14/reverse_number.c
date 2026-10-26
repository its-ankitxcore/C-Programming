#include <stdio.h>

int main() {
    int n,digit , rev;
    printf("enter number:");
    scanf("%d",&n);

    while(n!=0){
        digit = n%10;        // get the last digit
        rev = rev*10+digit;    // add it to the reversed number
        n=n/10;                // remove the last digit
    }
    printf("the reverse number is %d\n",rev);
    return 0;
}