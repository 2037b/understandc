#include <stdio.h>
int main() {
    int i, j, n, num;
    puts("让我们来画一个金字塔。") ;
    printf("金字塔有几层：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        num = 1;
        for (j = 1; j <= 2 * n - 1 ; j++) {
            if (j <= (n - i)) {
                printf(" ") ;
            } else if (num <= 2 * i - 1) {
                printf("*");
                num++;
            }
        }

        printf("\n") ;
    }

    return 0 ;
}