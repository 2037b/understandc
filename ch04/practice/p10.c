#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no, i;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    // int i = no;
    i = 1;

    while (i <= no) {
        printf("*\n");
        i++;
    }

    // putchar('\n');
    return 0;
}