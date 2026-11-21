#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, digit, sum = 0;int count=0;
    scanf("%d", &n);
    
    int t = n;
    
    int x=n;
    while(x!=0){
        count++;
        x/=10;
    }
    if(n==0)count=1;
    while (n != 0) {
        digit = n % 10;
        sum=sum+(int)round(pow(digit,count));
        n /= 10;
    }

    if (sum == t){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}