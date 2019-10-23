#include <stdio.h>
int  main(void) {
    int a,b;
    printf("%s\n", "请输入两个整数。");
    printf("%s", "整数1:");
    scanf("%d", &a);
    printf("%s", "整数2:");
    scanf("%d", &b);
    printf("%s%d%s\n", "它们的乘积是", a*b, "。");
    return 0;
}