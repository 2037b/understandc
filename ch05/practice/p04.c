#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int a[5]={17,23,36};
	int b[5];
	for (i = 0; i < 5; ++i)
	{
		b[i]=a[4-i];
	}
	puts("a    b");
	puts("-------");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d%4d\n",a[i],b[i] );
	}
	return 0;
}