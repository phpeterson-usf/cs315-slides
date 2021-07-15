#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint32_t string_to_int(char *str, int base) {
    uint32_t rv = 0;
    uint32_t place_val = 1;
    int len = strlen(str) - 1;
    int digit;

    for (int i = len; i >= 0; i--) {
        char ch = tolower(str[i]);
        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        } else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        } 
        rv += digit * place_val;
        place_val *= base;
    }
    return rv;
}

int main(int argc, char **argv) {
    int base = 10;
    char *str = argv[1];
    if (strlen(str) > 2) {
        if (!strncmp(str, "0b", 2)) {
            base = 2;
            str += 2;
        } else if (!strncmp(str, "0x",  2)) {
            base = 16;
            str += 2;
        }
    }
    uint32_t value = string_to_int(str, base);
    printf("%d\n", value);
    return 0;
}
