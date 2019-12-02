#include <stdio.h>
#include <math.h>
#define pi 3.1415926
void main() {
    double dou1, dou2;
    printf("%s\n", "请输入圆的半径：");
    scanf("%lf", &dou1);
    printf("%s%lf\n", "圆的面积是：", pi * dou1 * dou1);
}