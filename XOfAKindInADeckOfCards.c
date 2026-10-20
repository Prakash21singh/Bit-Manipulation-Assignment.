#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int hasGroupsSizeX(int *deck, int deckSize) {
    int maxValue = 0;
    for (int i = 0; i < deckSize; ++i) {
        if (deck[i] > maxValue) {
            maxValue = deck[i];
        }
    }

    int *count = (int *)calloc((size_t)maxValue + 1, sizeof(int));
    if (count == NULL) {
        return 0;
    }

    for (int i = 0; i < deckSize; ++i) {
        ++count[deck[i]];
    }

    int g = 0;
    for (int i = 0; i <= maxValue; ++i) {
        if (count[i] > 0) {
            g = (g == 0) ? count[i] : gcd(g, count[i]);
        }
    }

    free(count);
    return g >= 2;
}

int main(void) {
    int deck[] = {1, 2, 3, 4, 4, 3, 2, 1};
    int size = (int)(sizeof(deck) / sizeof(deck[0]));
    printf("%s\n", hasGroupsSizeX(deck, size) ? "true" : "false");
    return 0;
}
