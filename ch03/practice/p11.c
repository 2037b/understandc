#include<stdio.h>
int main(void) {
    int n1, n2;
    printf("%s\n", "请输入两个整数。");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);

    if (n1 - n2 >= 11 || n1 - n2 <= -11) {
        puts("它们的差大于等于11。");
        /* code */
    } else {
        puts("它们的差小于等于10。");

    }

    return 0;
}