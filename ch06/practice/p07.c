#include <stdio.h>
void hello(void){						//()内有没有void都可以；
	printf("%s\n", "你好。");
}
int main(int argc, char const *argv[])
{
	hello();
	return 0;
}