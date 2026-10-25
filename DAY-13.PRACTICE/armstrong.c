#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digits = 0, remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Step 1: count the digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    if (num == 0) digits = 1;   // special case: 0 has 1 digit

    // Step 2: sum of each digit raised to the power of 'digits'
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += (int)round(pow(remainder, digits));
        temp /= 10;
    }

    // Step 3: compare
    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}