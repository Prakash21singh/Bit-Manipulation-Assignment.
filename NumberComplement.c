#include <stdio.h>

int findComplement(int num) {
    int mask = 1;
    while (mask <= num) {
        mask <<= 1;
    }
    return (mask - 1) ^ num;
}

int main(void) {
    int num;
    printf("Enter number: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        return 1;
    }

    printf("Complement: %d\n", findComplement(num));
    return 0;
}
