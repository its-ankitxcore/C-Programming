#include <stdio.h>

int main() {
    int m;
    int n;
    printf("enter no of col :  ");
    scanf("%d",&n);
    printf("enter no of rows  :  ");
    scanf("%d",&m);

    for(int i=1; i<=m;i++){
        for(int i=1;i<=n;i++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}