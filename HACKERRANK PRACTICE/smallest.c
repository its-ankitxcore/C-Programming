#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x, min;
    scanf("%d", &min);

    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }

    printf("%d\n", min);
    return 0;
}