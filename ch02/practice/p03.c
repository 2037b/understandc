#include <stdio.h>
int main() {
    double a;
    printf("%s", "请输入一个实数：");
    // printf("%s\n", "整数x：");
    scanf("%lf", &a);    
    printf("%s%lf。\n", "你输入的是",a);
    return 0;
	// scanf("%d", &y);
 //    printf("%s%.f%s\n", "x的值是y的", x*1.0*100/y,"%");
}