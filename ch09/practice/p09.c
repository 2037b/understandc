#include<stdio.h>
int main(int argc, char const *argv[])
{
	char str[]="ABC\0DEf";
	printf("字符串str为\"%s\"。\n", str);
	return 0;
}