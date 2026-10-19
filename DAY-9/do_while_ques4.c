#include <stdio.h>

int main() {
    int num, sum = 0;         // sum ko 0 se start karna zaroori hai

    do {
        printf("Enter number: ");
        scanf("%d", &num);    // input loop ke andar 
        sum = sum + num;      // 0 judne se sum par koi farak nahi padta
    } while (num != 0);       // 0 aaya to loop band, yahan ; 

    printf("Sum = %d\n", sum);
    return 0;
}