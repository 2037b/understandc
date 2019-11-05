#include<stdio.h>
int i;
int i;
void  put_count(){
	i++;
	printf("put_count:第%d次\n",i);
}
int main(int argc, char const *argv[])
{
	int num;
	printf("%s", "输入调用次数：");
	scanf("%d",&num);
	for (int i = 0; i < num; ++i)
	{
		put_count();
	}
	// putchar('\n');
	return 0;
}