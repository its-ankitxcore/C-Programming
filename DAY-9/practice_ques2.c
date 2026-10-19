#include <stdio.h>

int main() {
    int a = 10, b = 3;
printf("%d\n", a / b);
printf("%d\n", a % b);
printf("%d\n", a++ + ++b);
printf("%d %d\n", a, b);
printf("%d\n", (a > b) && (b > 5));
    return 0;
}