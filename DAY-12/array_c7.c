#include <stdio.h>

int main() {
    int arr[5] = {15, 22, 9, 40, 31};
    int key = 40, found = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Found %d at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d not found\n", key);
    return 0;
}