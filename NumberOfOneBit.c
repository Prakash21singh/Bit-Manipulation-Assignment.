#include <stdio.h>

unsigned int hammingWeight(unsigned int n) {
    unsigned int count = 0;
    while (n > 0) {
        count += (n & 1U);
        n >>= 1;
    }
    return count;
}

int main(void) {
    unsigned int n;
    printf("Enter a number: ");
    if (scanf("%u", &n) != 1) {
        return 1;
    }

    printf("Set bits: %u\n", hammingWeight(n));
    return 0;
}
