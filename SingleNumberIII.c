#include <stdio.h>

void singleNumber(int *nums, int numsSize, int *result) {
    int xorAll = 0;
    for (int i = 0; i < numsSize; ++i) {
        xorAll ^= nums[i];
    }

    int diffBit = xorAll & (-xorAll);
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < numsSize; ++i) {
        if ((nums[i] & diffBit) == 0) {
            result[0] ^= nums[i];
        } else {
            result[1] ^= nums[i];
        }
    }
}

int main(void) {
    int nums[] = {1, 2, 1, 3, 2, 5};
    int result[2];
    int size = (int)(sizeof(nums) / sizeof(nums[0]));

    singleNumber(nums, size, result);
    printf("Unique numbers: %d %d\n", result[0], result[1]);
    return 0;
}
