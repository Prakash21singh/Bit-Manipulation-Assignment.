#include <stdio.h>

int hasAlternatingBits(int n) {
    int x = n ^ (n >> 1);
    return (x & (x + 1)) == 0;
}

int main(void) {
    int n;
    printf("Enter number: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("%s\n", hasAlternatingBits(n) ? "true" : "false");
    return 0;
}
