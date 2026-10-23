#include <stdio.h>

int main() {
    int arr[5] = {10, 45, 3, 99, 27};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest number: %d\n", max);
    return 0;
}