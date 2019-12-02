#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("请输入一个数：");
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    int min = a[0][0];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
            }

            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (max == a[i][j]) {
                printf("max=a[%d][%d]=%d\n", i, j, max);
            }
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (min == a[i][j]) {
                printf("min=a[%d][%d]=%d\n", i, j, min);
            }
        }
    }

    return 0;
}