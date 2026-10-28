#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    if(a+b>c && a+c>b && c+b>a){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    return 0;
}