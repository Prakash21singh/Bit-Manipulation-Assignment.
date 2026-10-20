#include <stdio.h>

int singleNumber(int *nums, int numsSize) {
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < numsSize; ++i) {
        ones = (ones ^ nums[i]) & ~twos;
        twos = (twos ^ nums[i]) & ~ones;
    }
    return ones;
}

int main(void) {
    int nums[] = {2, 2, 3, 2};
    int size = (int)(sizeof(nums) / sizeof(nums[0]));
    printf("Single number: %d\n", singleNumber(nums, size));
    return 0;
}
