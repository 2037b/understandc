#include <stdio.h>
int main() {
    int i, j;
    int n;
    puts("让我们来画一个金字塔。") ;
    printf("金字塔有几层：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

}