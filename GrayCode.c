#include <stdio.h>
#include <stdlib.h>

int *grayCode(int n, int *returnSize) {
    *returnSize = 1 << n;
    int *result = (int *)malloc((*returnSize) * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < *returnSize; ++i) {
        result[i] = i ^ (i >> 1);
    }
    return result;
}

int main(void) {
    int n;
    int size;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 16) {
        return 1;
    }

    int *sequence = grayCode(n, &size);
    if (sequence == NULL) {
        return 1;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d%s", sequence[i], (i == size - 1) ? "\n" : " ");
    }

    free(sequence);
    return 0;
}
