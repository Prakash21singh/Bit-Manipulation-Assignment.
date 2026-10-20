#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int reversed = 0;
    for (int i = 0; i < 32; ++i) {
        reversed <<= 1;
        reversed |= (n & 1U);
        n >>= 1;
    }
    return reversed;
}

int main(void) {
    unsigned int n;
    printf("Enter unsigned integer: ");
    if (scanf("%u", &n) != 1) {
        return 1;
    }

    printf("Reversed bits value: %u\n", reverseBits(n));
    return 0;
}
