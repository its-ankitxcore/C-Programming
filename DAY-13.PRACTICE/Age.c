#include<stdio.h>
int main()

{
    int age;
    printf("enter age");
    scanf("%d",&age);
    if(age>=18){
        printf("person can vote");
    }
    else{
        printf("person can not vote");
    }
}