#include <stdio.h>
int  main(void) {
    int a, b, c;
    printf("%s\n", "请输入三个整数。");
    printf("%s", "整数1:");
    scanf("%d", &a);
    printf("%s", "整数2:");
    scanf("%d", &b);
    printf("%s", "整数3:");
    scanf("%d", &c);
    printf("%s%d%s\n", "它们的和是", a + b + c, "。");
    return 0;
}