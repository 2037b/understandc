#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("第%d行，第%d列", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0, j = 0; i < 3; ++i, ++j) {		//for (int i = 0, j = 0,sum=0; i < 3; ++i, ++j)
        sum += arr[i][j];							//sum变成了与全局变量同名的局部变量；
        printf("i=%d j=%d sum=%d\n", i, j, sum);
    }

    printf("%s%d\n", "左对角线的和为：", sum);
    sum = 0;

    for (int i = 2, j = 0; i >= 0; i--, j++) {
        sum += arr[i][j];
    }

    printf("%s%d\n", "右对角线的和为：", sum);

    for (int i = 0; i < 3; ++i) {
        sum = 0;

        for (int j = 0; j < 3; ++j) {
            sum += arr[i][j];
        }

        printf("第%d行的和为：%d\n", i + 1, sum);
    }

    for (int i = 0; i < 3; ++i) {
        sum = 0;

        for (int j = 0; j < 3; ++j) {
            sum += arr[j][i];
        }

        printf("第%d列的和为：%d\n", i + 1, sum);
    }

    return 0;
}