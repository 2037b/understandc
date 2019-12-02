// 三维数组的最大值和最小值以及下标

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a[10] = {4, 4, 6, 2, 8, 167, 9, 15, 2, 10};

    int min, max;

    min = a[0];
    max = a[0];

    for (int i = 1; i < 10; ++i) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (max == a[i]) {
            printf("最大值：a[%d]=%d\n", i, max);
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (min == a[i]) {
            printf("最小值：a[%d]=%d\n", i, min);
        }
    }

    // int arr[3][3] = {4, 4, 6, 2, 8, 167, 9, 15, 2};

    int arr[3][3] = {{4, 4, 6}, {2, 8, 167}, {9, 15, 2}};

    // int min, max;

    min = arr[0][0];
    max = arr[0][0];

    for (int line = 0; line < 3; line++) {
        for (int col = 0; col < 3; ++col) {
            if (max < arr[line][col]) {
                max = arr[line][col];
            }

            if (min > arr[line][col]) {
                min = arr[line][col];
            }
        }
    }

    for (int line = 0; line < 3; line++) {
        for (int col = 0; col < 3; ++col) {
            if (max == arr[line][col]) {
                printf("最大值：arr[%d][%d]=%d\n", line, col, max);
            }
        }
    }

    for (int line = 0; line < 3; line++) {
        for (int col = 0; col < 3; ++col) {
            if (min == arr[line][col]) {
                printf("最小值：arr[%d][%d]=%d\n", line, col, min);
            }
        }
    }

    return 0;
}
