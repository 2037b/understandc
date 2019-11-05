#include <stdio.h>
int min(int a,int b,int c){
	int value=a;
	if(value>b)
		value=b;
	if(value>c)
		value=c;
	return value;
}
int main(int argc, char const *argv[])
{
	int num1,num2,num3;
	printf("%s\n", "请输入三个整数：");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("最小数为：%d\n",min(num1,num2,num3));	
	return 0;
}