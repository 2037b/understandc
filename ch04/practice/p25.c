#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    printf("%s\n", "让我们来画一个向下的金字塔。");
    printf("%s", "金字塔有几层：");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            printf(" ");
        }

        for (int j = 0; j < 2 * (n - i + 1) - 1; ++j) {
            printf("%d", i);
        }

        /* code */
        printf("\n");
    }

    return 0;
}