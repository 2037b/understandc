#include<stdio.h>
int main(int argc, char const *argv[]) {
    int no,i;
    printf("%s", "请输入一个正整数：");
    scanf("%d", &no);
    // int i = no;
    i = 0;
    printf("%d%s", no, "的位数是：");

    while (no > 0) {
        no/=10;
        i++;
    }

    printf("%d", i);

    putchar('\n');
    return 0;
}