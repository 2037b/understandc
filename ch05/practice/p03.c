#include <stdio.h>
int main(int argc, char const *argv[])
{
	int v[5]={5,4,3,2,1};
	for (int i = 0; i < 5; ++i)
	{
        printf("v[%d]=%d ", i, v[i]);
	}
	putchar('\n');
	return 0;
}