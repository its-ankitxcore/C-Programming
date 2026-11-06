#include <stdio.h>

int main() {
    int n, i, j, w;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        w = 2 * i - 1;                      

        for (j = 0; j < n - i; j++)         
            printf(" ");

        for (j = 0; j < w; j++) {
            if (j == 0 || j == w - 1 || i == n)   
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}