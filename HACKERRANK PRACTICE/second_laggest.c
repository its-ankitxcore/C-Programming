#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    int first = 0, second = 0;   // safe, since all values are >= 1

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x < first) {
            second = x;
        }
    }

    printf("%d\n", second);
    return 0;
}