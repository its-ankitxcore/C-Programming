#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;   // sum ko 0 se start karna zaroori hai

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;       // sum mein i jodo
        i++;                 // i ko badhao
    }

    printf("Sum = %d\n", sum);
    return 0;
}