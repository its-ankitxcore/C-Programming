#include <stdio.h>

int main() {
    int a=4,b=2,c=6,d=32;
    if (a>b && a>c && a>d){
        printf("the greatest of all is %d",a);
    }
    else if (b>a && b>c && b>d){
        printf("the greatest of all is %d",b);
     }    
    else if (c>b && c>a && c>d){
        printf("the greatest of all is %d",c);
    }
    if (d>b && d>c && d>a){
        printf("the greatest of all is %d",d);
    }

    return 0;
}