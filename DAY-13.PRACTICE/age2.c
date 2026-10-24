#include<stdio.h>
int main()

{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>18){
        printf("person can vote");
    }
    else if (age<18 && age>13){
        printf("teenager");
    }
    else if (age<13){
        printf("child");
    }
    else{
        printf("person can not vote");
    }
}