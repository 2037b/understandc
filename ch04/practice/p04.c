#include<stdio.h>
int main(int argc, char const *argv[])
{
	int no;
	printf("%s","请输入一个正整数：" );
	scanf("%d",&no);
	if(no>=0){
		while(no>=1){
			printf("%d ",no--);
		}
		printf("\n");
	}
	/* code */
	return 0;
}