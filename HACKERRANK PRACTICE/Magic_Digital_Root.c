#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    // keep summing digits until n is a single digit
    while (n > 9) {
        int sum = 0;

        while (n > 0) {
            sum = sum + n % 10;    // add the last digit
            n = n / 10;            // remove the last digit
        }

        n = sum;                   // repeat with the new number
    }

    if (n == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}