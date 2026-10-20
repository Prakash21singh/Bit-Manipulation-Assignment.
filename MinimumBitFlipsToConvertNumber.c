#include <stdio.h>

int minBitFlips(int start, int goal) {
    int value = start ^ goal;
    int flips = 0;

    while (value > 0) {
        flips += (value & 1);
        value >>= 1;
    }
    return flips;
}

int main(void) {
    int start, goal;
    printf("Enter start and goal: ");
    if (scanf("%d %d", &start, &goal) != 2) {
        return 1;
    }

    printf("Bit flips: %d\n", minBitFlips(start, goal));
    return 0;
}
