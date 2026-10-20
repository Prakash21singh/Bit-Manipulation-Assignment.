#include <stdio.h>

void toHex(unsigned int num, char *buffer) {
    if (num == 0U) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    const char hexDigits[] = "0123456789abcdef";
    char temp[9];
    int index = 0;

    while (num > 0U) {
        temp[index++] = hexDigits[num & 15U];
        num >>= 4;
    }

    for (int i = 0; i < index; ++i) {
        buffer[i] = temp[index - 1 - i];
    }
    buffer[index] = '\0';
}

int main(void) {
    int value;
    char hexValue[9];

    printf("Enter an integer: ");
    if (scanf("%d", &value) != 1) {
        return 1;
    }

    toHex((unsigned int)value, hexValue);
    printf("Hex: %s\n", hexValue);
    return 0;
}
