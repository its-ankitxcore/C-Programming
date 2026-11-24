#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    while (n != 1 && n != 4) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;            // get the last digit
            sum = sum + digit * digit;     // add the square of the digit
            n = n / 10;                    // remove the last digit
        }

        n = sum;                     
    }

    if (n == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}