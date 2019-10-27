#include<stdio.h>
int main(void) {
    puts("请输入两个整数。");
    int a, b, min, sum, max;
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    if (a > b) {
        min = b;
        max = a;
        /* code */
    } else {
        min = a;
        max = b;
    }

    for (int i = min; i <= max; i++) {
        sum += i;
    }

    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", min, max, sum);
    return 0;
}