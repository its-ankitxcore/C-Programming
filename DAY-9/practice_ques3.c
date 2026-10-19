#include <stdio.h>

int main() {
    int num, last, remaining;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    last = num % 10;        // last digit
    remaining = num / 10;   // last digit hatne ke baad ka number

    printf("Last digit = %d\n", last);
    printf("Remaining number = %d\n", remaining);
    return 0;
}