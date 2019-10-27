#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, n;
    int num = 0;
    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        if (n % i == 0) {
            printf("%d\n", i);
            num++;
        }

    printf("约数有%d个。", num);
    putchar('\n');
    /* code */
    return 0;
}