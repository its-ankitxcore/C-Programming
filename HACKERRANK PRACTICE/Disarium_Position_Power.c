#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    // Step 1: count the digits of n
    int count = 0;
    int temp = n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Step 2: add each digit raised to the power of its position
    temp = n;
    long long sum = 0;
    int position = count;      // last digit has the highest position

    while (temp > 0) {
        int digit = temp % 10;     // get the last digit

        // calculate digit ^ position using a loop
        long long power = 1;
        for (int i = 1; i <= position; i++) {
            power = power * digit;
        }

        sum = sum + power;         // add to the total
        position--;                // next digit is one position to the left
        temp = temp / 10;          // remove the last digit
    }

    if (sum == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}