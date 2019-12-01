#include <stdio.h>
void main() {
    int x, y;
    printf("%s\n", "请输入两个整数。");
    printf("%s\n", "整数x：");
    scanf("%d", &x);    
    printf("%s\n", "整数y：");
	scanf("%d", &y);
    printf("%s%.f%s\n", "x的值是y的", x*1.0*100/y,"%");
}