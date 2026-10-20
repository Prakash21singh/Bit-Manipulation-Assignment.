#include <limits.h>
#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int maxDotProduct(int *nums1, int nums1Size, int *nums2, int nums2Size) {
    const int NEG_INF = INT_MIN / 4;
    int dp[505][505];

    for (int i = 0; i <= nums1Size; ++i) {
        for (int j = 0; j <= nums2Size; ++j) {
            dp[i][j] = NEG_INF;
        }
    }

    for (int i = 1; i <= nums1Size; ++i) {
        for (int j = 1; j <= nums2Size; ++j) {
            int product = nums1[i - 1] * nums2[j - 1];
            int best = product;

            if (dp[i - 1][j - 1] != NEG_INF) {
                best = max(best, dp[i - 1][j - 1] + product);
            }
            best = max(best, dp[i - 1][j]);
            best = max(best, dp[i][j - 1]);

            dp[i][j] = best;
        }
    }

    return dp[nums1Size][nums2Size];
}

int main(void) {
    int nums1[] = {2, 1, -2, 5};
    int nums2[] = {3, 0, -6};
    int size1 = (int)(sizeof(nums1) / sizeof(nums1[0]));
    int size2 = (int)(sizeof(nums2) / sizeof(nums2[0]));

    printf("Max dot product: %d\n", maxDotProduct(nums1, size1, nums2, size2));
    return 0;
}
