#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    long long square = (long long)n * n;   
    int temp = n;
    long long divisor = 1;               
    while (temp > 0) {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    if (square % divisor == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}