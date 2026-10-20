#include <stdio.h>

int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        if ((num & 1) == 0) {
            num >>= 1;
        } else {
            --num;
        }
        ++steps;
    }
    return steps;
}

int main(void) {
    int num;
    printf("Enter number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    printf("Steps: %d\n", numberOfSteps(num));
    return 0;
}
