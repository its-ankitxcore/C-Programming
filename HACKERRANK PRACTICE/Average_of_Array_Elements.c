#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%.2f\n", (double)sum / n);
    return 0;
}