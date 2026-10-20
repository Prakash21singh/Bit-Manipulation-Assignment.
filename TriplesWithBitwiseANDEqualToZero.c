#include <stdio.h>
#include <stdlib.h>

int countTriplets(int *nums, int numsSize) {
    const int limit = 1 << 16;
    int *pairCount = (int *)calloc(limit, sizeof(int));
    if (pairCount == NULL) {
        return -1;
    }

    for (int i = 0; i < numsSize; ++i) {
        for (int j = 0; j < numsSize; ++j) {
            ++pairCount[nums[i] & nums[j]];
        }
    }

    int result = 0;
    for (int i = 0; i < numsSize; ++i) {
        int mask = (~nums[i]) & (limit - 1);
        int subset = mask;

        while (1) {
            result += pairCount[subset];
            if (subset == 0) {
                break;
            }
            subset = (subset - 1) & mask;
        }
    }

    free(pairCount);
    return result;
}

int main(void) {
    int nums[] = {2, 1, 3};
    int size = (int)(sizeof(nums) / sizeof(nums[0]));
    printf("Triples count: %d\n", countTriplets(nums, size));
    return 0;
}
