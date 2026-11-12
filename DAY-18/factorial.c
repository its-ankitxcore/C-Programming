#include <stdio.h>
int fact(int n);
int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=fact(n-1)*n;
    return factN;
}

int main() {
    printf("the factorial is %d ",fact(10));
    return 0;
}