#include <stdio.h>

int main() {
    int age =70;
    if (age>60){
        printf("person can vote and you are a senior citizen");
    }
    else if (age>18){
        printf("person can vote");
    }
    else{
        printf("person can not vote");
    }

    return 0;
}