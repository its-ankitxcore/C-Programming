#include<stdio.h>
int main() {
    int age =10;
    if (age>60){
        printf("person can drive and you are a senior citizen");
    }
    else if (age>18){
        printf("person can drive");
    }
    else{
        printf("person can not drive");
    }

    return 0;
}