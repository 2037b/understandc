#include<stdio.h>
int main(void) {
    int num, i, a;
    // scanf("%d", &a);
    printf("%s", "请输入循环次数：");
    scanf("%d",&a);
    for (i = 0; i < a; ++i) {
        printf("%s", "请输入一个整数：");
        scanf("%d", &num);

        if (num == 0) {
            puts("该整数为0。");
            /* code */
        } else if (num > 0) {
            puts("该整数为正数。");

        } else if (num < 0) {
            puts("该整数为负数。");

            /* code */
        }

        /* code */
    }

    return 0;
}