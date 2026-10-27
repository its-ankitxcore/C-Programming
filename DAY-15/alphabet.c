#include<stdio.h>
int main(){
    int c;
    printf("enter c");
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
        for(int j=1;j<=c;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}