#include <stdio.h>

void sum (int a , int b ){
    printf("the sum is %d\n",a+b);
}    

void average (int a , int b ){                 //void kuch bhi return nhi krta
    printf("the average is %f\n",(a+b)/2.0);
}    


int main() {
    int a =4;
    int b =6;
    sum(a,b);
    average(a,b);
  
    return 0;
}