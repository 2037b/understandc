#include <stdio.h>
int cube(int x){
	return x*x*x;
}
int main(int argc, char const *argv[])
{
	int x;
	printf("%s", "请输入一个整数：");
	scanf("%d",&x);
	printf("%d的立方是：%d\n",x,cube(x));
	return 0;
}