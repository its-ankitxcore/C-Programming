#include <stdio.h>

int sum (int* a , int* b ){     // sum function, do pointers leta hai
    return *a + *b;               // dono ki value jodkar wapas bhejta hai
}   
float average (int* a , int* b ) {   //average function 2 pointers le raha hai
    return (*a + *b) / 2.0;              
}    
int main() {                               // program yahan se shuru
    int a =4;
    int b =6;
    int s=sum(&a,&b);
    float avg = average(&a, &b);
    printf("the sum is %d\n", s);
    printf("the average is %f\n", avg);
    printf("the address of sum is %p\n", (void *)sum);
    printf("the address of average is %p\n", (void *)average);
    return 0;
}
