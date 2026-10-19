#include <stdio.h>

int main() {
    float angle1,angle2,angle3;
    printf("angle1=");
    scanf("%f",&angle1);
    printf("angle2=");
    scanf("%f",&angle2);
    printf("angle3=");
    scanf("%f",&angle3);
    if(angle1>0 ,angle2>0 ,angle3>0){
        printf("valid triangle\n");
    }
    else{
        printf("invalid triangle\n");
    }
    return 0;
}