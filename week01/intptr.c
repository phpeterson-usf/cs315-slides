#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 5;
    int *pi = &i;
    printf("i: %d, pi: %p\n", i, pi);
    return 0;
}
