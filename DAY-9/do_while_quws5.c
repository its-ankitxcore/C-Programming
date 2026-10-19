#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter positive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Thank you\n");
    return 0;
}