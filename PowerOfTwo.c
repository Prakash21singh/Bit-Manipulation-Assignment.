#include <stdio.h>

int isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("%s\n", isPowerOfTwo(n) ? "true" : "false");
    return 0;
}
