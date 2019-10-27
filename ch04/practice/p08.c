#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    int i = no;

    while (i-- > 0) {
        putchar('*');
    }

    if (no>=1) {
        putchar('\n');

        /* code */
    }

    return 0;
}