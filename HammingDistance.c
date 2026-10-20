#include <stdio.h>

int hammingDistance(int x, int y) {
    int value = x ^ y;
    int count = 0;

    while (value > 0) {
        count += (value & 1);
        value >>= 1;
    }
    return count;
}

int main(void) {
    int x, y;
    printf("Enter x and y: ");
    if (scanf("%d %d", &x, &y) != 2) {
        return 1;
    }

    printf("Hamming distance: %d\n", hammingDistance(x, y));
    return 0;
}
