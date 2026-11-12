#include <stdio.h>
void printtable(int n );
void printtable(int n){        // parameter
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n", n, i, i*n);
    }
}
int main() {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printtable(n);     //argument /actual parameter
    return 0;
}