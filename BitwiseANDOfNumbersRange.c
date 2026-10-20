#include <stdio.h>

int rangeBitwiseAnd(int left, int right) {
    int shift = 0;
    while (left < right) {
        left >>= 1;
        right >>= 1;
        ++shift;
    }
    return left << shift;
}

int main(void) {
    int left, right;
    printf("Enter left and right: ");
    if (scanf("%d %d", &left, &right) != 2) {
        return 1;
    }

    printf("Result: %d\n", rangeBitwiseAnd(left, right));
    return 0;
}
