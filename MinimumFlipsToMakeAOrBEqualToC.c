#include <stdio.h>

int minFlips(int a, int b, int c) {
    int flips = 0;
    while (a > 0 || b > 0 || c > 0) {
        int bitA = a & 1;
        int bitB = b & 1;
        int bitC = c & 1;

        if (bitC == 0) {
            flips += bitA + bitB;
        } else if (bitA == 0 && bitB == 0) {
            ++flips;
        }

        a >>= 1;
        b >>= 1;
        c >>= 1;
    }
    return flips;
}

int main(void) {
    int a, b, c;
    printf("Enter a b c: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }

    printf("Minimum flips: %d\n", minFlips(a, b, c));
    return 0;
}
