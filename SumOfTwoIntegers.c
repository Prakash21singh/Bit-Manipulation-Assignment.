#include <stdio.h>

int getSum(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("Enter a and b: ");
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    printf("Sum: %d\n", getSum(a, b));
    return 0;
}
