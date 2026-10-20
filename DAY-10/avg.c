#include <stdio.h>

int main() {
    float a,b,c,avg;
    printf("enter a=");
    scanf("%f",&a);

    printf("enter b=");
    scanf("%f",&b);

    printf("enter c=");
    scanf("%f",&c); 


    avg=(a+b+c)/3;
    printf("the avg of %.2f %.2f %.2f is %.2f\n",a,b,c,avg);
    return 0;
}