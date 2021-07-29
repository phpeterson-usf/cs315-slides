#include <stdint.h>
#include <stdio.h>

int main(int argc, char **argv) {
    uint8_t i = 0b11111111;
    uint8_t j = i + 1;
    printf("j: %d\n", j);

    int8_t k = 0b11111111;
    int8_t l = k + 1;
    printf("l: %d\n", l);

    int8_t m = 0b10000000; // -128
    int8_t n = m - 1;
    printf("n: %d\n", n);
    return 0;
}
