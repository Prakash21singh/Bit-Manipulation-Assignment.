#include <stdio.h>

int bitwiseComplement(int n) {
    if (n == 0) {
        return 1;
    }

    int mask = 0;
    int copy = n;
    while (copy > 0) {
        mask = (mask << 1) | 1;
        copy >>= 1;
    }
    return (~n) & mask;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    printf("Complement: %d\n", bitwiseComplement(n));
    return 0;
}
