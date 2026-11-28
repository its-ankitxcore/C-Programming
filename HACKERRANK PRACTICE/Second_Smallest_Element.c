#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int smallest = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }

    int second = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > smallest && (second == -1 || a[i] < second)) {
            second = a[i];
        }
    }

    printf("%d\n", second);
    return 0;
}