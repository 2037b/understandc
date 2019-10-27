#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;
    printf("%s", "请输入一个整数：");
    scanf("%d", &no);
    // int i = no;
    i = 0;

    while (no > 0) {
        i++;
        no--;
        printf("%d", i%10);
    }

    putchar('\n');
    return 0;
}