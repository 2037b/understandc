#include <stdio.h>
void alert(int number){
	for (int i = 0; i < number; ++i)
	{
		printf("\a");
	}
}
int main(int argc, char const *argv[])
{
	int number;
	printf("%s", "输入响铃次数：");
	scanf("%d",&number);
	alert(number);
	return 0;
}