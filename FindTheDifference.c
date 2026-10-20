#include <stdio.h>

char findTheDifference(const char *s, const char *t) {
    char result = 0;

    for (int i = 0; s[i] != '\0'; ++i) {
        result ^= s[i];
    }
    for (int i = 0; t[i] != '\0'; ++i) {
        result ^= t[i];
    }

    return result;
}

int main(void) {
    const char *s = "abcd";
    const char *t = "abcde";
    printf("Extra character: %c\n", findTheDifference(s, t));
    return 0;
}
