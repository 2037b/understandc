// 三维数组的对角线，行，列的加和

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int leftCorner = 0, rightCorner = 0;
    int eachLineSum[3] = {0};
    int eachColSum[3] = {0};

    int arr[3][3] = {{4, 4, 6}, {2, 8, 167}, {9, 15, 2}};

    for (int line = 0; line < 3; line++) {
        for (int col = 0; col < 3; ++col) {
            eachLineSum[line] += arr[line][col];
            eachColSum[col] += arr[line][col];

            if (line == col) {
                leftCorner += arr[line][col];
            }

            if (line == 2 - col) {
                rightCorner += arr[line][col];
            }
        }

    }

    printf("%s=%d\n", "左对角线", leftCorner);
    printf("%s=%d\n", "右对角线", rightCorner);

    for (int i = 0; i < 3; i++) {
        printf("第%d行的和=%d\n", i, eachLineSum[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("第%d列的和=%d\n", i, eachColSum[i]);
    }

    return 0;
}
