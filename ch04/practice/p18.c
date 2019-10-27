#include<stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    printf("%s", "显示多少个：");
    scanf("%d", &n);
    int  i = 1;

    while (i <= n) {
        printf("*");

        if (!(i % 5)) {
            printf("\n");
        }

        i++;
    }

    printf("\n");
    return 0;
}