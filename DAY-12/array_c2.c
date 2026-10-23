#include <stdio.h>

int max_subarray(int nums[], int n) {
    int best = nums[0], cur = nums[0];
    for (int i = 1; i < n; i++) {
        cur = (nums[i] > cur + nums[i]) ? nums[i] : cur + nums[i];
        if (cur > best) best = cur;
    }
    return best;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    printf("Max sum: %d\n", max_subarray(nums, 9));   // 6
    return 0;
}