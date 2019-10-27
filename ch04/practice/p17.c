#include<stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    printf("%s", "n的值：");
    scanf("%d", &n);
    int  i = 1;

    while (i <= n) {
        printf("%d的二次方是%d\n", i,i*i);
        i++;
    }

    // printf("\n");
    return 0;
}