#include <stdio.h>

int minimumOneBitOperations(int n) {
    int result = 0;
    while (n > 0) {
        result ^= n;
        n >>= 1;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    printf("Minimum operations: %d\n", minimumOneBitOperations(n));
    return 0;
}
