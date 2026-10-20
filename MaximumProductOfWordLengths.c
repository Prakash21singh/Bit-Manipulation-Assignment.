#include <stdio.h>
#include <string.h>

int buildMask(const char *word) {
    int mask = 0;
    for (size_t i = 0; i < strlen(word); ++i) {
        mask |= (1 << (word[i] - 'a'));
    }
    return mask;
}

int maxProduct(char **words, int wordsSize) {
    int masks[1000];
    int lengths[1000];

    for (int i = 0; i < wordsSize; ++i) {
        masks[i] = buildMask(words[i]);
        lengths[i] = (int)strlen(words[i]);
    }

    int best = 0;
    for (int i = 0; i < wordsSize; ++i) {
        for (int j = i + 1; j < wordsSize; ++j) {
            if ((masks[i] & masks[j]) == 0) {
                int product = lengths[i] * lengths[j];
                if (product > best) {
                    best = product;
                }
            }
        }
    }
    return best;
}

int main(void) {
    char *words[] = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    int size = (int)(sizeof(words) / sizeof(words[0]));
    printf("Maximum product: %d\n", maxProduct(words, size));
    return 0;
}
