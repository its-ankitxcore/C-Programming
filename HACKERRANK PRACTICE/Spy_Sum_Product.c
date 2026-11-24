#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int temp = n;       
    int sum = 0;        // sum of the digits
    int product = 1;    

    while (temp > 0) {
        int digit = temp % 10;     // get the last digit
        sum = sum + digit;         // add it to the sum
        product = product * digit; // multiply it into the product
        temp = temp / 10;       // remove the last digit
    }

    if (sum == product)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}