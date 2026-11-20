#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rev=0,digit;
    scanf("%d",&n);
    int t=n;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }    
    if(rev==t){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
