#include <stdio.h>

int isPowerOfFour(int n) {
    return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("%s\n", isPowerOfFour(n) ? "true" : "false");
    return 0;
}
