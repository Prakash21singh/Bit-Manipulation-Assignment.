#include <stdio.h>

int bitCount(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int isPrime(int value) {
    if (value < 2) {
        return 0;
    }
    for (int i = 2; i * i <= value; ++i) {
        if (value % i == 0) {
            return 0;
        }
    }
    return 1;
}

int countPrimeSetBits(int left, int right) {
    int result = 0;
    for (int n = left; n <= right; ++n) {
        if (isPrime(bitCount(n))) {
            ++result;
        }
    }
    return result;
}

int main(void) {
    int left, right;
    printf("Enter left and right: ");
    if (scanf("%d %d", &left, &right) != 2) {
        return 1;
    }

    printf("Count: %d\n", countPrimeSetBits(left, right));
    return 0;
}
