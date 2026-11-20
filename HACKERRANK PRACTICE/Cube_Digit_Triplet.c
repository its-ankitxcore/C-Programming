#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    scanf("%d", &n);
    int t = n;

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n /= 10;
    }
    if (sum == t)
        printf("YES");
    else
        printf("NO");

    return 0;
}