#include<stdio.h>
int main(void) {
    int a, b;
    printf("%s\n", "请输入两个整数。");
    printf("整数A："); scanf("%d", &a);
    printf("整数B："); scanf("%d", &b);

    if (a % b == 0) {
        printf("B是A的约数。\n");
    } else {
        printf("B不是A的约数。\n");
    }
}