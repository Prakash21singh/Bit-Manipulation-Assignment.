#include <stdio.h>

int backtrack(int *nums, int numsSize, int index, int currentXor) {
    if (index == numsSize) {
        return currentXor;
    }

    int exclude = backtrack(nums, numsSize, index + 1, currentXor);
    int include = backtrack(nums, numsSize, index + 1, currentXor ^ nums[index]);
    return exclude + include;
}

int subsetXORSum(int *nums, int numsSize) {
    return backtrack(nums, numsSize, 0, 0);
}

int main(void) {
    int nums[] = {1, 3};
    int size = (int)(sizeof(nums) / sizeof(nums[0]));
    printf("Subset XOR total: %d\n", subsetXORSum(nums, size));
    return 0;
}
