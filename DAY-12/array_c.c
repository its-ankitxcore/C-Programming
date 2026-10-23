#include <stdio.h>

void two_sum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                return;
            }
        }
    }
    printf("No solution found\n");
}

int main() {
    int nums[] = {2, 7, 11, 15};
    two_sum(nums, 4, 9);   // Indices: 0, 1
    return 0;
}