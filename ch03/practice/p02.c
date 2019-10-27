#include<stdio.h>
int main(void) {
    int no;
    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0) {
        printf("该整数为0。\n");
    } else if (no > 0) {
        printf("该整数为正数。\n");
    } else if (no < 0) {

        printf("该整数为负数。\n");
    }

    return 0;
}