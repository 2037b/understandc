#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    // int i = no;
    // i = 1;
   printf("%d%s", no,"逆向显示的结果是：");

    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }

    putchar('\n');
    return 0;
}