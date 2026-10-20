#include <stdio.h>
int sum_natural();

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    //sum_natural = sum(n-1)+n;
    return sum_natural(n-1)+n;
}


int main() {
    int n=5;
    printf("the sum of first %d number is %d\n",n,sum_natural(n));

    return 0;
}