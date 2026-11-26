#include <stdio.h>
int main() {
    int arr[] = {2, 3, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int last = 0;
    for (int i = 0; i < n; i++) {
        last = arr[i];
    }

    printf("%d\n", last);
    return 0;
}