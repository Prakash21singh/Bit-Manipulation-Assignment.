#include <stdio.h>
#include <stdlib.h>

void countBits(int n, int *result) {
    result[0] = 0;
    for (int i = 1; i <= n; ++i) {
        result[i] = result[i >> 1] + (i & 1);
    }
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int *result = (int *)malloc((n + 1) * sizeof(int));
    if (result == NULL) {
        return 1;
    }

    countBits(n, result);
    for (int i = 0; i <= n; ++i) {
        printf("%d%s", result[i], (i == n) ? "\n" : " ");
    }

    free(result);
    return 0;
}
