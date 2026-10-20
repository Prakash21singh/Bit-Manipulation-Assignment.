#include <stdio.h>

int singleNumber(int *nums, int numsSize) {
    int value = 0;
    for (int i = 0; i < numsSize; ++i) {
        value ^= nums[i];
    }
    return value;
}

int main(void) {
    int nums[] = {4, 1, 2, 1, 2};
    int size = (int)(sizeof(nums) / sizeof(nums[0]));
    printf("Single number: %d\n", singleNumber(nums, size));
    return 0;
}
