#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char f[3];
    char *pf = &f[0];
    strncpy(f, "foo", sizeof(f));
    printf("f: %s, pf: %p, *pf: %c\n", f, pf, *pf);
    return 0;
}
