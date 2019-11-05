#include <stdio.h>
int main(int argc, char const *argv[]) {
    int v[5];

    for (int i = 0; i < 5; ++i) {
        v[i] = 5 - i ;
        printf("v[%d]=%d ", i, v[i]);
    }

    putchar('\n');
    return 0;
}