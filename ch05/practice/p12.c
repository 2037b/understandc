#include<stdio.h>
int main(int argc, char const *argv[]) {
    int i, j;
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
    };
    int sum[4][3] = {0};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 3; ++k) {
                printf("%d ", tensu[i][j][k]);
            }

            putchar('\n');

        }

        putchar('\n');

    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j)
            for (int k = 0; k < 3; ++k) {
                sum[j][k] += tensu[i][j][k];
            }
    }

    puts("总分");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%4d", sum[i][j]);
        }

        putchar('\n');
    }

    return 0;
}