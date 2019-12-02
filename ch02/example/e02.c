#include <stdio.h>
int main() {
    int x, y;
    printf("%s\n", "请输入两个整数。");
    scanf("%d%d", &x, &y);
    printf("%d，%d\n", x, y);

    if (x < 0 || y < 0) {
        printf("只支持正整数比较。\n");
    } else if (x < y) {
        printf("较大的数为%d\n", y);

    } else {
        printf("较大的数为%d\n", x);

    }
    return 0;
    // printf("%s\n", "整数y：");
    // scanf("%d", &y);
    // printf("%s%.f%s\n", "x的值是y的", x*1.0*100/y,"%");
}