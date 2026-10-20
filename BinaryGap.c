#include <stdio.h>

int binaryGap(int n) {
    int last = -1;
    int best = 0;
    int index = 0;

    while (n > 0) {
        if ((n & 1) == 1) {
            if (last != -1 && index - last > best) {
                best = index - last;
            }
            last = index;
        }
        n >>= 1;
        ++index;
    }

    return best;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("Binary gap: %d\n", binaryGap(n));
    return 0;
}
