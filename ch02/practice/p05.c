#include<stdio.h>
int main(void) {
    int a, b;
    printf("%s\n", "请输入两个整数。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);
    printf("a是b的%lf%%。\n", (double)(a)*100 / b);
}