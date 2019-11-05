#include <stdio.h>
double arr[5];
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 5; ++i)
	{
		printf("%lf ", arr[i]);
	}
	putchar('\n');
	return 0;
}