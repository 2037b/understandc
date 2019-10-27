#include <stdio.h>
void main() {
    int a, b;
    printf("%s\n", "请输入两个整数。");
    printf("%s\n", "整数a：");
    scanf("%d", &a);
    printf("%s\n", "整数b：");
    scanf("%d", &b);
    printf("%s%d,%s%d。\n", "它们的和是",a+b, "积是",a*b);
}