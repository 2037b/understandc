#include <stdio.h>
int min1(int a, int b) {
    int min;
    if (a > b) {
        min=b;
    } else {
        min=a;
    }
    return min;
}
int main(int argc, char const *argv[]) {
	int a,b;
	printf("%s\n", "请输入两个整数：");
	scanf("%d%d",&a,&b);
	printf("最小数为：%d\n",min1(a,b));
    return 0;
}