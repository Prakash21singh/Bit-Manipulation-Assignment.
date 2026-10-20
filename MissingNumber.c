#include <stdio.h>

int missingNumber(int *nums, int numsSize) {
    int result = numsSize;
    for (int i = 0; i < numsSize; ++i) {
        result ^= i;
        result ^= nums[i];
    }
    return result;
}

int main(void) {
    int nums[] = {3, 0, 1};
    int size = (int)(sizeof(nums) / sizeof(nums[0]));
    printf("Missing number: %d\n", missingNumber(nums, size));
    return 0;
}
