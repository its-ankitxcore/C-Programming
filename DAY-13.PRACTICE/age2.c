#include<stdio.h>
int main()

{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>18){
        printf("person can vote");
    }
    else if (age>50){
        printf("person is old but person can vote");
    }
    else{
        printf("person can not vote");
    }
}