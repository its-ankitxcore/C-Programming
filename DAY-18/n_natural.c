#include <stdio.h>
int sum(int n);
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sum(n-1)+n;
    return sumN;
}

int main() {
    printf("the sum is %d ",sum(10));
    return 0;
}